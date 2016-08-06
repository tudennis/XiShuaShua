//
//  factory.hpp
//  XiShuaShua
//
//  Created by Yijian on 8/6/16.
//  Copyright © 2016 Yijian. All rights reserved.
//

#ifndef factory_hpp
#define factory_hpp

#include "problem.hpp"
#include "orderedmatrix.hpp"

#include <iostream>
#include <string>

namespace XiShuaShua {
    
    class Factory {
        
    private:
        OrderedMatrix* m_orderedMatrix;
        
    public:
        // Constructor
        Factory() : m_orderedMatrix(new OrderedMatrix())
        {
        };
        
        // Destructor
        ~Factory()
        {
            delete m_orderedMatrix;
        };
        
        Problem* getProblemSolver(const std::string& name)
        {
            if (name == "orderedmatrix"){
                return static_cast<Problem *>(m_orderedMatrix);
            }
            else{
                std::cout << "Unsupported problem name " << name << std::endl;
                return nullptr;
            }
        };
        
    }; // Factory
    
} // XiShuaShua

#endif /* factory_hpp */
