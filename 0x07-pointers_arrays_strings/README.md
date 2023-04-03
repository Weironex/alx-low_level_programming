0x07. C - Even more pointers, arrays and strings

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers to pointers and how to use them
What are multidimensional arrays and how to use them
What are the most common C standard library functions to manipulate strings

|File Name|Prototype|Description|
|---|---|---|
|`0-memset.c`|`char *_memset(char *s, char b, unsigned int n)`|Fills memory with a constant byte|
|`1-memcpy.c`|`char *_memcpy(char *dest, char *src, unsigned int n)`|Copies memory area|
|`2-strchr.c`|`char *_strchr(char *s, char c);`|Locates a character in a string|
|`3-strspn.c`|`unsigned int _strspn(char *s, char *accept)`|Gets the length of a prefix substring|
|`4-strpbrk.c`|`char *_strpbrk(char *s, char *accept)`|Searches a string for any of a set of bytes|
|`5-strstr.c`|`char *_strstr(char *haystack, char *needle)`|Locates a substring|
|`7-print_chessboard.c`|`void print_chessboard(char (*a)[8])`|Prints the chessboard|
|`8-print_diagsums.c`|`void print_diagsums(int *a, int size)`|Prints the sum of the two diagonals of a square matrix of integers|
|`100-set_string.c`|`void set_string(char **s, char *to)`|Sets the value of a pointer to a char|
|`101-crackme_password`|``|Contains the password for the crackme2 executable|
