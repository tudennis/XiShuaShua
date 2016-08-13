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
        
        void
        mergeSort(const std::vector<int>& v1,
                  const std::vector<int>& v2,
                  std::vector<int>& r)
        {
            std::cout << "Merge sort the following arrays" << std::endl;
            printVector(v1);
            printVector(v2);
            
            size_t v1i(0), v2i(0);
            while (v1i < v1.size() && v2i < v2.size())
            {
                if (v1[v1i] < v2[v2i])
                {
                    r.push_back(v1[v1i]);
                    ++ v1i;
                }
                else
                {
                    r.push_back(v2[v2i]);
                    ++ v2i;
                }
            }
            
            if (v1i < v1.size())
            {
                for (size_t i(v1i); i < v1.size(); ++i)
                {
                    r.push_back(v1[i]);
                }
            }
            
            if (v2i < v2.size())
            {
                for (size_t i(v2i); i < v2.size(); ++i)
                {
                    r.push_back(v2[i]);
                }
            }
            
            printVector(r);
            
        }
        
        void nonDescendingOrder(const std::vector< std::vector< int > >& matrix)
        {
            std::vector<int> result;
            mergeSort(matrix[0], matrix[1], result);
        }
    } // anonymous
    
    void
    OrderedMatrix::solve()
    {
        std::cout << "OrderedMatrix::solve()" << std::endl;
        
        std::vector< std::vector<int> > m;
        
        std::vector<int> v;
        v.push_back(1);
        v.push_back(7);
        v.push_back(8);
        v.push_back(20);
        m.push_back(v);
        
        v.clear();
        v.push_back(2);
        v.push_back(6);
        v.push_back(9);
        v.push_back(19);
        m.push_back(v);
        
        printMatrix(m);
        
        nonDescendingOrder(m);
    }
    
    
} // XiShuaShua