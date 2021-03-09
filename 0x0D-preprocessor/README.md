# Preprocessor
Preprocessing is the first stage in compiling a C program. A preprocessor does the following:  
* Removes comments from the C files.  
* Includes header files.  
* Replaced the macros with their values.  
## Macros
Macro helps to make the code more readable. For example:  
```c
#include <stdio.h>
#define SIZE 1024
int main(void)
{
	int s;

	s = SIZE;
	printf(%d\n", s);
	return (0);
}
```
The value of s in the above program is initialized to the macro ```SIZE``` which expands to ```1024```.  
The output of the above program will be ```1024```.  
Macros can have arguments, but care must be taken when using macros with arguments to ensure that the order of operation performed is the desired one.  
There are standard marcros in C such us ```__FILE__``` that expands to the name of the current input file in the form of a C string constant.  
## Preprocessor Directives
Examples include:  
* #define: As used in the above program to define a macro  
* Conditional directives:```#if```, ```#else```, ```#ifndef```, ```#elif```, ```#endif```.  
* #include: includes a header file.  
## Include Guards
When a header file if included in several files its bound for macros, structs etc to be defined multiple times. To avoid this, we ensure our header files are guard included by using the ```#ifndef``` and ```endif``` preprocessor directives.
