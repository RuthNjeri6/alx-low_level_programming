# Structures
User defined data types that allow to combine data items of different types.   
```c
struct User
{
	char *name;
	char *email;
	int age;
}
```
Creating a data group of type struct:  
```c
struct User User;
```
Accessing elements in a struct:  
```c
User.name;
User.email;
User.age;
```
## Pointer to a Struct
```c
struct User *p;
p = &User;
//initialize or change the value of an element
User.age = 20; // or
(*p).age = 20; // or
p->age = 20;
```
# Typedef
Keyword used to give a type a new word.Used with structs as follows:  
```c
typedef struct User
{
	/* structs Elements
	   * go here
	   */
} User;
```
