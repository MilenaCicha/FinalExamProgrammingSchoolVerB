#pragma  once
#include "Operation.h"

namespace Operations{
    class Multiply : public Operation::Operation{
        public:
            float doOperation(float, float) override;

    };
}




