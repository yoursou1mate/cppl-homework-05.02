//
//  main.cpp
//  cppl-homework-05.02
//
//  Created by a1ex on 2/16/24.
//


#include <iostream>

template<class T>
class twoDimArray
{
private:
    T **arr;
    int row;
    int col;
public:
    twoDimArray(int row, int col)
{
        this->row = row;
        this->col = col;
        this->arr = new T*[row];
        for(int i = 0; i < row; i++)
          {
            arr[i] = new T [col];
          }
        std::cout << "Constructor worked" << std::endl;
    }
    
    twoDimArray(const twoDimArray &other)
    {
        this->row = other.row;
        this->col = other.col;
        this->arr = new T*[other.row];
        for(int i = 0; i < other.row; ++i)
        {
            this->arr[i] = new T [other.col];
        }
        std::cout << "Copying constructor worked" << std::endl;
    }
    
    void set(int r, int c, T val)
      {
        arr[r][c] = val;
      }
    T* operator[](int index)
      {
    return arr[index];
      }
    T get(int r, int c)
      {
        return arr[r][c];
      }
    
    auto print_size() const
    {
        std::cout << "Size of array is: " << row << "x" << col << std::endl;
    }
    
    
    ~twoDimArray()
{
        for(int i = 0; i < row; i++)
          {
            delete[] arr[i];
          }
        delete[] arr;
        std::cout << "Destructor worked;" << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    
    auto test = twoDimArray<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0] << std::endl;

    auto test2 = test;
    std::cout << test2[0][0] << std::endl;
    
    test.print_size();
    test2.print_size();
    
    
    return 0;
}
