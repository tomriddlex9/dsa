## How does a C++ Program run 

A C++ program begins execution at the main function. The main function is a special function in C++ that is called when the program starts.

**Before the main function is called, the C++ compiler performs several tasks, including:**

1.**Preprocessing**: Processing of all the preprocessor directives in the program, such as #include and #define. 

2.**Compiling**: The C++ compiler (for ex: gnu gcc, clang, mingw) translates the preprocessed source code into machine code, which is a low-level code that can be executed by the computer's processor. 

3.**Linking**: The linking process combines the compiled object files and any external libraries used by the program into a single executable file

**Only after the process of pre-processing, compilation and linking** a program or application can be run on the machine, the code written and the application/executable created is machine independent but platform dependent.