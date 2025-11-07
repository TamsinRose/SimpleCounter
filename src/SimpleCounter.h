/******************************************************************************
// Define the SimpleCounter class
******************************************************************************/
#ifndef SIMPLE_COUNTER_HEADER_FILE
#define SIMPLE_COUNTER_HEADER_FILE
#include "Arduino.h"

template <typename COUNTER_TYPE>
class SimpleCounter{
    public:
        COUNTER_TYPE startValue;
        COUNTER_TYPE maxValue;
        COUNTER_TYPE iterationStep;
        COUNTER_TYPE totalCycles;
        COUNTER_TYPE count;
        unsigned int incrementAt;

        SimpleCounter(COUNTER_TYPE startVal, COUNTER_TYPE maxVal, COUNTER_TYPE step = 1, int incAt = 1);

        bool increment();
};

#endif //SIMPLE_COUNTER_HEADER_FILE