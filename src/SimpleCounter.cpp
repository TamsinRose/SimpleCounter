/******************************************************************************
// Define the SimpleCounter class methods
******************************************************************************/
#include "SimpleCounter.h"

SimpleCounter::SimpleCounter(int startVal, unsigned long maxVal, int step, int incAt){
    startValue = startVal;
    maxValue = maxVal;
    iterationStep = step;
    totalCycles = 0;
    value = startVal;
    incrementAt = incAt;  
}

bool SimpleCounter::increment(){
    totalCycles++;
    if(value >= maxValue){
        value = startValue;
    }else{
        if(incrementAt == iterationStep){
            value = value + iterationStep;
        }
        else{
            if((totalCycles % (incrementAt)) == 0){
                value = value + iterationStep;
            }
            else{
                return false;
            }
        }
        
    } 
    return true;
}
