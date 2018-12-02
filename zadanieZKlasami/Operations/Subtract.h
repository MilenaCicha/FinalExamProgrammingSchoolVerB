#pragma  once
#include "Operation.h"

namespace Operations{
    class Subtract : public Operation::Operation{
        public:
            float doOperation(float, float) override;
    };
}



