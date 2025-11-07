/******************************************************************************
// Define the SimpleCounter class methods
******************************************************************************/
#include "Arduino.h"
#include "SimpleCounter.h"

template <typename COUNTER_TYPE>
SimpleCounter<COUNTER_TYPE>::SimpleCounter(COUNTER_TYPE startVal, COUNTER_TYPE maxVal, COUNTER_TYPE step, int incAt){
    startValue = startVal;
    maxValue = maxVal;
    iterationStep = step;
    totalCycles = 0;
    count = startVal;
    incrementAt = incAt;
}

template <typename COUNTER_TYPE>
bool SimpleCounter<COUNTER_TYPE>::increment(){
    totalCycles++;
    if(count >= maxValue){
        count = startValue;
    }else{
        if(incrementAt == iterationStep){
            count = count + iterationStep;
        }
        else{
            if((totalCycles % (iterationStep * incrementAt)) == 0){
                count = count + iterationStep;
            }
            else{
                return false;
            }
        }
        
    } 
    return true;
}

template class SimpleCounter<char>;
template class SimpleCounter<unsigned char>;
template class SimpleCounter<int>;
template class SimpleCounter<unsigned int>;
template class SimpleCounter<long>;
template class SimpleCounter<unsigned long>;
// template class SimpleCounter<float>;