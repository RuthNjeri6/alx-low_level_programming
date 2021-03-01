# C Libraries   
In C there is need to create libraries. A library contains object files for programs. Creating Library helps us achieve reusablity of your programs.   
## Steps of creating a static library
* Create object files from the c programs
```bash
gcc -c *.c
```
The option ```-c``` compilers but does not link while ```*.c``` selects all files ending with the extension .c  
* Create a library using the ```ar``` archive program.  
```bash
ar -rc libname.a *.o
```
The ```-c``` option creates the library if it does not exist while the ```-r``` inserts the files or replaces the content of the library with the objects files.  
You can list the contents of the library  using the following command  
```bash
ar -t libname.a
```
* Generate an index to the library using the ```ranlib``` program  
```bash
ranlib libname.a
```
This process can be done when creating the library as follows:  
```ar -rcs libname.a *.o
```
To list the symbols of the library use the program ```nm```.
