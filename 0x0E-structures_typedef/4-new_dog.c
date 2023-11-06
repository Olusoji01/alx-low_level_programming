#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: Owner of new dog
 * Rettun: it returns NULL if the functions fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*creating memory for new_dog using malloc*/
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
