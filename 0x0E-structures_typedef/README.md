0x0E. C - Structures, typedef
---
Learning Objectives
---
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
---
What are structures, when, why and how to use them
How to use `typedef`
---
File Name and Description
---
|File Name|Prototype|Description|
|---|---|---|
|`dog.h`|-|Define a new type struct dog with the following elements: `name, type = char *`, `age, type = float`, `owner, type = char *`|
|`1-init_dog.c`|`void init_dog(struct dog *d, char *name, float age, char *owner)`|Initialize a variable of type `struct dog`|
|`2-print_dog.c`|`void print_dog(struct dog *d)`|Prints a `struct dog`|
|`dog.h`|-|Define a new type `dog_t` as a new name for the type `struct dog`|
|`4-new_dog.c`|`dog_t *new_dog(char *name, float age, char *owner)`|Creates a new dog|
|`5-free_dog.c`|`void free_dog(dog_t *d)`|Frees dogs|
