#pragma  once
#include "Operation.h"

namespace Operations{
    class Divide : public Operation::Operation {
        public:
            float doOperation(float, float) override;
    };
}




