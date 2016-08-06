//
//  printutil.hpp
//  XiShuaShua
//
//  Created by Yijian on 8/6/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#ifndef printutil_hpp
#define printutil_hpp

#include <vector>
#include <iostream>

namespace XiShuaShua
{
    template <typename A>
    void
    printVector(const std::vector< A >& v)
    {
        for(size_t i(0); i < v.size(); ++i)
        {
            std::cout << v[i] << " ";
        }
        
        std::cout << std::endl;
    };
    
    template <typename A>
    void
    printMatrix(const std::vector< std::vector< A > >& m)
    {
        for (size_t i(0); i < m.size(); ++i)
        {
            printVector(m[i]);
        }
    };
} // XiShuaShua

#endif /* printutil_hpp */
