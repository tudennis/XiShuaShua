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
#include <memory>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace XiShuaShua;
    
    Factory f;
    
    std::cout << "Please enter problem name" << std::endl;
    
    std::string problemName;
    
    std::cin >> problemName;
    
    try
    {
        std::shared_ptr<Problem> problem = f.getProblemSolver(problemName);
        
        if (problem != nullptr)
        {
            problem->solve();
        }
        else
        {
            std::cout << "Unsupported problem " << problemName << std::endl;
        }
        
    } catch (...)
    {
        std::cout << "Exception during problem solving" << std::endl;
    }
    
    return 0;
}
