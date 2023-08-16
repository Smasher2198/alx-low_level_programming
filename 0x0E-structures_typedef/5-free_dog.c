#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog_t - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * description: a structure representing a dogs attribute
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * free_dog - free memory allocated for a dog structure
 * @d: pointer to the dog structure
 *
 * description: the function takes a pointer to a dog structure
 * and frees the memory allocated for its name and owner fields,
 * as well as the memory for the dog structure itself
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
int main(void)
{
	dog_t *my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		perror("malloc failed");
		return (1);
	}
	my_dog->name = malloc(sizeof(char) * 10);
	if (my_dog->name == NULL)
	{
		perror("malloc failed");
		free(my_dog);
		return (1);
	}
	my_dog->owner = malloc(sizeof(char) * 10);
	if (my_dog->owner == NULL)
	{
		perror("malloc failed");
		free(my_dog->name);
		free(my_dog);
		return (1);
	}
	my_dog->age = 2.5;
	my_dog->name = "Buddy";
	my_dog->owner = "Alice";
	free_dog(my_dog);
	return (0);
}
