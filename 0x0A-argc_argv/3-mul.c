#include <stdio.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum;
	if (argc == 3)
	{
		sum = argc(argv[1]) * argc(argv[2]);
		printf("%d\n", sum);
	return (0);
}
	else
	{
		printf("Error");
		return (-1);
	}
}
