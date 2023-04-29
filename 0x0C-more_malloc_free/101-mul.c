#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - checks if a string is a valid positive number
 * @str: the string to check
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise
 */
int is_valid_number(char *str)
{
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");

		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
