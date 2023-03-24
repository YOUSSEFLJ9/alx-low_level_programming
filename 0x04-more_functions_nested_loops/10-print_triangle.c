#include "main.h"
/**
  *print_triangle - this function print triagle
  *
  *@size: this var reprisent lins and colone 
  */
void print_triangle(int size)
{
	int a,b,c;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++ )
	{
		for (b = 1; b <= (size - a); b++)
			_putchar(' ');

		for (c = 1; c <= a ; c++)
			_putchar('#');

		_putchar('\n');
	}
}
