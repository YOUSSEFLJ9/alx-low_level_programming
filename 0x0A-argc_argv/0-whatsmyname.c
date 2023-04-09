#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - this the main Entery
  *
  *@argc: int counter to count argument
  *@argv: poiter of string (point to pointer char)
  *
  *Return: lets try 0
  */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
