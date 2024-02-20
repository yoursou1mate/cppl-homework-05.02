//
//  template_class.cpp
//  cppl-homework-05.02
//
//  Created by a1ex on 2/16/24.
//

#include "template_class.hpp"
#include <iostream>

template<class T>
class twoDimArray
{
private:
    T **arr;
    int row;
    int col;
public:
    twoDimArray(int r, int c)
{
        row = r;
        col = c;
        arr = new T*[row];
        for(int i = 0; i < row; i++)
          {
            arr[i] = new T[col];
            
          }
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
    ~twoDimArray()
{
        for(int i = 0; i < row; i++)
          {
            delete[] arr[i];
            
          }
        delete[] arr;
    }
};
