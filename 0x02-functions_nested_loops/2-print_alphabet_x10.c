#include "main.h"
/**
 *print_alphabet_x10 - based on the function print_alphabet
 */
void print_alphabet_x10(void)
{
	int times = 0;
	char alph;

	while (times < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		times++;
	}
}
