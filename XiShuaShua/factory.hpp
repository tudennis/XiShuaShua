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
#include <memory>       // std::shared_ptr

namespace XiShuaShua {
    
    class Factory {
        
    private:
        std::shared_ptr<OrderedMatrix> m_orderedMatrix;
        
    public:
        // Constructor
        Factory() : m_orderedMatrix(std::shared_ptr<OrderedMatrix>(new OrderedMatrix()))
        {
        };
        
        // Destructor
        ~Factory()
        {
            // delete m_orderedMatrix;
        };
        
        std::shared_ptr<Problem> getProblemSolver(const std::string& name)
        {
            if (name == "orderedmatrix")
            {
                return static_cast< std::shared_ptr<Problem> >(m_orderedMatrix);
            }
            else
            {
                return nullptr;
            }
        };
        
    }; // Factory
    
} // XiShuaShua

#endif /* factory_hpp */
