#pragma once

namespace Operations{
    class Operation{
        public:
            virtual float doOperation(float, float)=0;
            virtual ~Operation() = default;
    };
}