//
//  main.cpp
//  cppl-homework-05.02
//
//  Created by a1ex on 2/16/24.
//

#include <iostream>
#include "template_class.hpp"


int main(int argc, const char * argv[]) {
    
    auto test = twoDimArray<int>(2, 3);
      test[0][0] = 4;
      std::cout << test[0][0];

    
    return 0;
}
