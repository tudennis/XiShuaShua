//
//  main.cpp
//  XiShuaShua
//
//  Created by Yijian on 8/6/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#include "problem.hpp"
#include "factory.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace XiShuaShua;
    
    Factory f;
    
    Problem* problem = f.getProblemSolver("orderedmatrix");
    
    problem->solve();
    
    return 0;
}
