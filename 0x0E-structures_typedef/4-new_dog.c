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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_cpy = malloc(sizeof(char) * (strlen(name) + 1));
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_cpy, name);

	owner_cpy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		return (NULL);
	}
	strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
