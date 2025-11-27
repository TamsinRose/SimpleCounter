/******************************************************************************
// Define the SimpleCounter class
******************************************************************************/
#ifndef SIMPLE_COUNTER_HEADER_FILE
#define SIMPLE_COUNTER_HEADER_FILE
#include "Arduino.h"

class SimpleCounter{
    public:
        int startValue;
        unsigned long maxValue;
        int iterationStep;
        unsigned long totalCycles;
        unsigned long value;
        int incrementAt;
        bool strictOverflow;

        SimpleCounter(int startVal = 0, unsigned long maxVal = 255, int step = 1, int incAt = 1, bool strict = false);

        bool increment();
};

#endif //SIMPLE_COUNTER_HEADER_FILE