#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: .
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int lenName, lenOwner;

	lenName = _strlen(name);
	lenOwner = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (lenName + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}

	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;
	return (doggy);
}
/**
 * _strlen - returns the length of a string
 * @s: the string to be calculed
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;


	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * *_strcpy - function that copies a string
 * @dest: string copy destination
 * @src: the string to copy
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;


	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
