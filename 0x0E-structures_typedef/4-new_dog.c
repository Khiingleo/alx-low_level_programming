#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string to measure
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * _strcpy - copies the contents of a string from source to destination
 * @dest: destination string
 * @src: source string
 * Return: returns pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = _strcpy(doge->name, name);
	doge->owner = _strcpy(doge->owner, owner);
	doge->age = age;

	return (doge);
}
