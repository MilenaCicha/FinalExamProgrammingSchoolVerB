#pragma  once
#include "Operation.h"

namespace Operations{
    class Add : public Operation::Operation {
        public:
            float doOperation(float, float) override;
    };
}



