#include "shell_v2.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * free(dest);
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	char *temp;
	int n, i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	j = _strlen(src);

	temp = malloc(sizeof(char) * (i + j) + 1);
	for (n = 0; dest[n] != '\0'; n++)
		temp[n] = dest[n];
	for (j = 0; src[j] != '\0'; n++, j++)
		temp[n] = src[j];
	temp[n] = '\0';
	return (temp);
}

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if match, -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/**
 * _strdup - duplicates a string
 * @str: a string
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	char *dup;
	int counter = 0;

	if (str == NULL)
		return (NULL);
	while (str[counter] != '\0')
		counter++;
	dup = malloc(sizeof(char) * counter + 1);
	if (dup == NULL)
		return (NULL);
	for (counter = 0; str[counter] != '\0'; counter++)
		dup[counter] = str[counter];
	dup[counter] = '\0';
	return (dup);
}

/**
 * _strlen - gets length of a string
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strncmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to compare
 * Return: 1 if match, -1 if not
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (s1[i] && s2[i] && i <= n)
	{
		if (s1[i] != s2[i])
			return (-1);
		i++;
	}
	return (0);
}
