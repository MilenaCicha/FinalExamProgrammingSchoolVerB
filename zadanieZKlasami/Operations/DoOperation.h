#pragma once

#include <memory>
#include "Operation.h"


namespace Operations{
    class DoOperation {

        public:
            std::unique_ptr<Operation> operation;
            explicit DoOperation (std::unique_ptr<Operation> o){
                operation = std::move(o);
            }


    };
}