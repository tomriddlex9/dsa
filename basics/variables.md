# Variables

- Simply a name given to a memory location, for easier and faster access. It is a mapping of a human readable name to a memory address, for better understanding the functioning of code and performing operations upon the data stored in the location. 
- Values stored in variable can be changed during program execution
- In C++, the variables must be defined or declared before use. 

### Difference between variable declaration and definition
The variable declaration refers to the part where a variable is first declared or introduced before its first use. A variable definition is a part where the variable is assigned a memory location and a value. Most of the time, variable declaration and definition are done together.

```c++ 

// declaration of a variable 
data_type variable name  
// example of declaration 
int a; 
char c; 
double d , dx; 
//definition of a variable 

data_type variable_name = value 
data_type variable_name{value}, other_variable{value}
// example of definitions 
int a =32 ; 
char c = 'H'; 
double d{34.5454}, dx{3434}; 
``` 
## Types of Variables

### Local Variables: 

A variable defined within a block or method or constructor is called a local variable. 

- These variables are created when entered into the block or the function is called and destroyed after exiting from the block or when the call returns from the function.
- The scope of these variables exists only within the block in which the variable is declared. i.e. we can access this variable only within that block.
- Initialization of Local Variable is Mandatory.

### Instance Variables: 

Instance variables are non-static variables and are declared in a class outside any method, constructor, or block. 
- As instance variables are declared in a class, these variables are created when an object of the class is created and destroyed when the object is destroyed.
- Unlike local variables, we may use access specifiers for instance variables. If we do not specify any access specifier then the default access specifier will be used.
- Initialization of Instance Variable is not Mandatory.
- Instance Variable can be accessed only by creating objects.