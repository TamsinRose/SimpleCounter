# SimpleCounter

A simple counter object, can be used by other objects and functions. Counts up to a maximum set value in set increments and resets to start value when this is reached.

---
## Usage:

### Instantiation

`SimpleCounter(int startVal = 0, unsigned long maxVal = 255, int step = 1, int incAt = 1, bool strict = false)`

`counterExample SimpleCounter;`

**startVal:**
The starting value a counter should count from.
Default = 0

**maxVal:**
The highes value a counter should count to.
Default = 255

**step:**
The increment value the counter should count in.
Default = 1

**incAt:**
The number of calls to `increment()` that are required to increment the counter value. 
For example, *step = 1, incAt = 5* would cause the value to increase by 1 only after increment() has been called five times.
Default = 1

**strict:**
Strict = true will prevent the counter exceeding the **maxVal** when using a combination of **maxVal** and **step** that might orderinary cause the counter value to exceed the **maxVal**

### Methods

**increment()**
`counterExample.increment();`
Calling the increment() function will increment the counter **value**, every **incAt** times it is called. Then **incAt** is = 1, as default, the **value** will increment the value ever time it is called.

### Properties

**value**
`counterExample.value;`
This propery is the current value of the counter.

**totalCycles**
`counterExample.totalCycles;`
The total number of times that **increment()** has been called.

