0x0B. C - malloc, free

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is the difference between automatic and dynamic allocation
What is `malloc` and `free` and how to use them
Why and when use `malloc`
How to use `valgrind` to check for memory leak

|File Name|Prototype|Description|
|`0-create_array.c`|`char *create_array(unsigned int size, char c)`|Creates an array of chars, and initializes it with a specific char|
|`1-strdup.c`|`char *_strdup(char *str)`|Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter|
|`2-str_concat.c`|`char *str_concat(char *s1, char *s2)`|Concatenates two strings|
|`3-alloc_grid.c`|`int **alloc_grid(int width, int height)`|Returns a pointer to a 2 dimensional array of integers|
|`4-free_grid.c`|`void free_grid(int **grid, int height)`|Frees a 2 dimensional grid previously created by your `alloc_grid` function|
|`100-argstostr.c`|`char *argstostr(int ac, char **av)`|Concatenates all the arguments of your program|
|`101-strtow.c`|`char **strtow(char *str)`|Splits a string into words|
