#include "main.h"
/**
 * *_strcpy - copies string pointed by src
 * @dest: where to copty to
 * @src: where to cory from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
