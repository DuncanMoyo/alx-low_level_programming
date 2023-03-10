#include <stdio.h>
#include <stdlib.h>

/**
 * main -  minimum number of coins to make change for an amount of money
 * @argc: number of arguments in the command line
 * @argv: the actual arguments in the command line
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int coin, numOfCoins;

	numOfCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);

	while (coin > 0)
	{
		if (coin >= 25)
		{
			coin -= 25;
		} else if (coin >= 10)
		{
			coin -= 10;
		} else if (coin >= 5)
		{
			coin -= 5;
		} else if (coin >= 2)
		{
			coin -= 2;
		} else if (coin >= 1)
		{
			coin -= 1;
		}
		numOfCoins += 1;
	}
	printf("%d\n", numOfCoins);
	return (0);
}
