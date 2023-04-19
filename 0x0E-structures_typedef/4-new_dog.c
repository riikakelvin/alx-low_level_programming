#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - shows lengh of the string
 * @str: string under consideration
 * Return: string lengh measured
 */
int _strlen(char *str)
{
	int lengh = 0;

	while (*str)
	{
	lengh++;
	}
}
/**
 * *_strcopy - copies strin pointed out by pointer
 * @dest: buffer of the copied str
 * @src: source of the string being copied
 * Return: copy to destination
 */
char *_strcopy(char *dest, char *src)
{
	int loci = 0;

	for (loci = 0; src[loci]; loci++)
	{
	dest[loci] = src[loci];
	}
		dest[loci] = '\0';
		return (dest);
}
/**
 * *new_dog - function to create new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: (doggy) newly created struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);
	return (doggy);
}
