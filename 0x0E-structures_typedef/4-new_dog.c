#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the str
 * @src: string to be copied
 * Return: the pointer to des
 */
char *_strcpy(char *dest, char *src)
{
	int l, b;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (b = 0; b < l; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (age);
}
