//
//  orderedmatrix.cpp
//  XiShuaShua
//
//  Created by Yijian on 8/6/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#include "orderedmatrix.hpp"
#include "printutil.hpp"

#include <iostream>
#include <vector>

namespace XiShuaShua {

    namespace {
        
    } // anonymous
    
    void
    OrderedMatrix::solve()
    {
        std::cout << "OrderedMatrix::solve()" << std::endl;
        
        std::vector< std::vector<int> > m;
        
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        m.push_back(v);
        
        v.clear();
        v.push_back(5);
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        m.push_back(v);
        
        printMatrix(m);
    }
    
    
} // XiShuaShua