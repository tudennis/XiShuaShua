//
//  bitoperation.cpp
//  XiShuaShua
//
//  Created by Yijian on 8/12/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#include "bitoperation.hpp"

#include "printutil.hpp"

#include <iostream>

namespace XiShuaShua {
    
    namespace {
        
        std::string toBinary(int number)
        {
            std::string b("");
            
            bool isNegative = number < 0;
            if (isNegative)
            {
                number = (-number);
            }
            
            while (number > 0)
            {
                if (number % 2 == 1)
                {
                    b.insert(0, "1");
                }
                else
                {
                    b.insert(0, "0");
                }
                
                number /= 2;
            }
            
            if (isNegative)
            {
                b.insert(0, "-");
            }
            
            return b;
        }
        
    } // Anonymous
    
    void
    BitOperation::solve()
    {
        std::cout << "BitOperation::solve" << std::endl;
        
        int x = 5;
        
        std::cout << "x: " << x << std::endl;
        std::cout << "x <<= 1" << std::endl;
        x <<= 1;
        std::cout << "x: " << x << std::endl;
        std::cout << "x >>= 1" << std::endl;
        x >>= 1;
        std::cout << "x: " << x << std::endl;
        
        std::cout << "int y = (x>>1)" << std::endl;
        int y = (x>>1);
        std::cout << "y: " << y << std::endl;
        std::cout << "x: " << x << std::endl;
        
        
        std::cout << "x & y: " << (x & y) << std::endl;
        std::cout << "x | y: " << (x | y) << std::endl;
        std::cout << "x ^ y: " << (x ^ y) << std::endl;
        
        std::cout << "~x: " << (~x) << std::endl;
        std::cout << "~y: " << (~y) << std::endl;
        
        std::cout << "toBinary(x): " << toBinary(x) << std::endl;
        std::cout << "toBinary(~y): " << toBinary(~y) << std::endl;
    }
    
    
    
} // XiShuaShua