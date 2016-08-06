//
//  problems.hpp
//  XiShuaShua
//
//  Created by Yijian on 8/6/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#ifndef problem_hpp
#define problem_hpp

#include <stdio.h>

namespace XiShuaShua {

class Problem
{
public:
    virtual void solve() = 0;
}; // Problem
    
} // XiShuaShua

#endif /* problem_hpp */
