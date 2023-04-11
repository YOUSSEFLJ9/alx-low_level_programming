#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
void change(int input_coin);
/**
  *main - this fuction give the minimum number of coin to make change (in coin)
  *
  *@argv: vector of char
  *@argc: int counter
  *
  *Return: 1 if the numberarg  passed not 1 or 0
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{	int input_coin = atoi(argv[1]);
		change(input_coin);
		return (0);
	}

}
/**
  *change - this fuction give the minimum number of coin to make change
  *@input_coin: value entered
  *
  *Return: no return it's void
  */
void change(int input_coin)
{
		int coinsnumber = 0;

		if (input_coin <= 0)
		{
			printf("%d\n", coinsnumber);
		}
		else
		{

			while (input_coin >= 25)
			{
				input_coin -= 25;
				coinsnumber++;
			}
			while (input_coin >= 10)
			{
				input_coin -= 10;
				coinsnumber++;
			}
			while (input_coin >= 5)
			{
				input_coin -= 5;
				coinsnumber++;
			}
			while (input_coin >= 2)
			{
				input_coin -= 2;
				coinsnumber++;
			}
			while (input_coin >= 1)
			{
				input_coin -= 1;
				coinsnumber++;
			}
		}
		printf("%d\n", coinsnumber);
}
