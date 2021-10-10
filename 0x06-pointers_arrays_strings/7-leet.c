#include "holberton.h"
#include "stdio.h"
/**
 * leet - check the code for Holberton School students.
 * @str: variable
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i = 0, j;

	char lower[] = { 'a', 'e', 'o', 't', 'l' };
	char upper[] = { 'A', 'E', 'O', 'T', 'L'};
	char leet[] = { '4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				*(str + i) = leet[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
