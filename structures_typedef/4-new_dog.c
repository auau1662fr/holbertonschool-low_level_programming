#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog.
 *
 *
 * @name: char type
 *
 * @age: float type
 *
 * @owner: char type
 *
 * Return: Pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int s1, s2, i, j;

	s1 = 0, s2 = 0;
	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);

	while (name[s1++])
		;
	while (owner[s2++])
		;

	newDog->name = malloc(sizeof(newDog->name) * s1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < s1; i++)
		newDog->name[i] = name[i];

	newDog->age = age;


	newDog->owner = malloc(sizeof(newDog->owner) * s2);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < s2; j++)
		newDog->owner[j] = owner[j];

	return (newDog);
}
