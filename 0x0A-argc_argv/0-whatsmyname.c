#include <stdio.h>
/**
 *main - function
 *@argc: variable
 *@argv: variable
 *Return: zero
 */
int main(int argc, char* argv[])
{
	while(argc--)
	printf("%d/n", *argv[++]);
}
