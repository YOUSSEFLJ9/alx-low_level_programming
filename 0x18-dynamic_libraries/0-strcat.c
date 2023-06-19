#include "main.h"
/**
 *_strcat - this fuction
 *@dest: this is the destination variable
 *@src: this is the source variable
 *Return: the value of dest after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
