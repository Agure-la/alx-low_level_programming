#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length, owner_length, i;
	dog_t my_dog;

	my_dog = (dog_t *)malloc(sizeof(dog_t));
	if(my_dog == NULL)
		return NULL;
	name_length = owner_length = 0;
	while (name[name_length++])
		;
	while (owner[owner_length++])
		;
	my_dog->name = malloc(name_length * sizeof(my_dog->name));
	if(my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		my_dog->name[i] = name[i];
	my_dog->age = age;
	my_dog->owner = malloc(owner_length * sizeof(my_dog->owner));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		my_dog->owner[i] = owner[i];
	return (my_dog);
}
