#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *argstostr - this function concatenates all the arguments
  *@ac: int counter
  *@av: char vector pointer
  *
  *Return: a *string have all argm with linght between them if not null
  */
char *argstostr(int ac, char **av)
{
	char *argconca;
	int i, j, lenght;
	int wordcont = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	lenght = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lenght++;
		lenght++;
	}
	argconca = malloc((lenght + 1) * sizeof(char));

	if (argconca == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			argconca[wordcont] = av[i][j];
			wordcont++;
		}
		argconca[wordcont] = '\n';
		wordcont++;
	}
	argconca[wordcont] = '\0';
	return (argconca);
}
