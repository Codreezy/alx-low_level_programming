#include "main.h"
/**
 * strcat - concentrates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
