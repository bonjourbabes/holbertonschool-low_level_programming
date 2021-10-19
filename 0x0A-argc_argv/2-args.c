#include <stdio.h>
/**
 * main - function
 * @argc: - variable
 * @argv: - variable
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int i;
if (argc)
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
return (0);
}
