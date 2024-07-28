# Inline Functions

When the program executes the function call instruction, the CPU stores the memory address of hte instructions following the function call, copies the arguements of the function on the stack and finally transfers the control to the specified function. The CPU then executes the function code, stores the function return value in a predefined memory location/register and returns the control to the calling functionis can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee). For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code. This overhead occurs for small functions because execution time of small function is less than the switching time.

`Basically, in case of normal functions, the program control jumps to the place where it is
defined. But in case of inline functions, it can be understood that the entire function 
definition is brought to the place where it is called.`

### What exactly is Inline Function:
**Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.**


```c++
#include<iostream>
inline int cube(int s){
    return s*s*s; 
}
int main(){ 
    cout<<"The cube of 3 is: "<< cube(3) <<endl; 
    return 0; 
}
``` 