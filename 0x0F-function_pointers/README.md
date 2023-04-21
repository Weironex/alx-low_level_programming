0x0F. C - Function pointers
---
Learning Objectives
---
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
---
What are function pointers and how to use them
What does a function pointer exactly hold
Where does a function pointer point to in the virtual memory

File Name, Prototype, And Description
---
|File Name|Prototype|Description|
|---|---|---|
|`0-print_name.c`|`void print_name(char *name, void (*f)(char *))`|Prints a name|
|`1-array_iterator.c`|`void array_iterator(int *array, size_t size, void (*action)(int))`|Executes a function given as a parameter on each element of an array|
|`2-int_index.c`|`int int_index(int *array, int size, int (*cmp)(int))`|Searches for an integer|
|`3-main.c`|-|Contains `main` function only|
|`3-get_op_func.c`|`int (*get_op_func(char *s))(int, int)`|Contains the function that selects the correct function to perform the operation asked by the user|
|`3-calc.h`|-|Contains all the function prototypes and data structures used by the program|
|`3-op_functions.c`|-|Contains the 5 following functions (not more):
|`op_add`|`int op_add(int a, int b)`|Returns the sum of `a` and `b`|
|`op_sub`|`int op_sub(int a, int b)`|Returns the difference of `a` and `b`|
|`op_mul`|`int op_mul(int a, int b)`|Returns the product of `a` and `b`|
|`op_div`|`int op_div(int a, int b)`|Returns the result of the division of `a` by `b`|
|`op_mod`|`int op_mod(int a, int b)`|Returns the remainder of the division of `a` by `b`|
|`100-main_opcodes.c`|-|Prints the `opcodes` of its own main function|
