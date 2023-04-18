#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to new dog, or NULL if function fails.
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog = malloc(sizeof(dog_t));
    if (dog == NULL) {
        return (NULL);
    }
    dog->name = strdup(name);
    dog->age = age;
    dog->owner = strdup(owner);
    if (dog->name == NULL || dog->owner == NULL) {
        free(dog);
        return (NULL);
    }
    return (dog);
}
