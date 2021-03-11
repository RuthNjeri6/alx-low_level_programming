# Variadic Functions
These are functions that have unknown number of arguments or unknown type.  
Example id the ```printf``` function.  
To define a variadic function you must include ```stdarg.h``` header file that has definition for macros and type used in the variadic function.   
## Type   
```va_list``` - type of list of the unknown arguments  
## Macros
```va_start``` - Initializes the list of unknown arguments.  
```va_arg``` - Gives the next argument in the iteration.  
```va_end``` - Deallocates memory allocated to the ```va_list``` variable.  
```va_copy``` - Copies 
