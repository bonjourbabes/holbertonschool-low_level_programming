#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		sum = one(argv[1]) * two(argv[2]);
		printf("%d\n", sum);
		return(0);
	}
}
