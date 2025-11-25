/*
    SimpleCounter usage example, increments each time an input (button) is triggered
    Outputs the counter values over serial

*/

#include <SimpleCounter.h>

// SimpleCounter(startVal = 0, maxVal = 255, step = 1, incAt = 1, strict = false)
// Vallue restarts at startVal when maxVal is reached or exceded
// Strict mode enforces the maxValue and prevents any overrun when using an an increment step that does not neatly match up with a maxVal

// A SimpleCounter instance counter1, default starts at 0 and counts to 255 before restarting.
SimpleCounter counter1;

// A SimpleCounter instance counter2, default starts at 1 and count to 5 before restarting. 
SimpleCounter counter2(1, 5);

// A SimpleCounter instance counter3, default starts at 0 and counts in steps of 5 to 100 before restarting. 
SimpleCounter counter3(0, 100, 5);

// A SimpleCounter instance counter3, default starts at 0 and counts every 10 increments to 100 before restarting. 
SimpleCounter counter4(0, 100, 1, 10);


// Setup the input button
const int buttonPin = 2;  // the number of the pushbutton pin
int buttonState = 0;  // variable for reading the pushbutton status


void setup() {
    // start a serial port output for debugging
    Serial.begin(9600);  

    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);

    // print counter startin values to serial output
    Serial.print("counter1 value: ");
    Serial.println(counter1.value);

    Serial.print("counter2 value: ");
    Serial.println(counter2.value);

    Serial.print("counter3 value: ");
    Serial.println(counter3.value);

    Serial.print("counter4 value: ");
    Serial.println(counter4.value);
}

void loop() {

    if(digitalRead(buttonPin) == 1 && buttonState == 0){
        // button was pressed
        buttonState = 1;

        // send an increment() instruction to each of the counters
        counter1.increment();
        counter2.increment();
        counter3.increment();
        counter4.increment();

        // print counter current values to serial output

        Serial.print("counter1 value: ");
        Serial.println(counter1.value);

        Serial.print("counter2 value: ");
        Serial.println(counter2.value);

        Serial.print("counter3 value: ");
        Serial.println(counter3.value);

        Serial.print("counter4 value: ");
        Serial.println(counter4.value);

        // print a counter totalCycles to serial output - totalCycles does not reset for the life of the counter

        Serial.print("counter3 totalCycles: ");
        Serial.println(counter3.totalCycles);

        
    }
    else if(digitalRead(buttonPin) == 0){
        // button was released, or stayed in un-pressed state
        buttonState = 0;
    }

    

}