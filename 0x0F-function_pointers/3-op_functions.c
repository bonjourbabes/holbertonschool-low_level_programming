#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - function
 * @a: variable
 * @b: variable
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - function
* @a: variable
* @b: variable
*Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function
 * @a: variable
 * @b: variable
 *Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function
 * @a: variable
 * @b: variable
 *Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function
 * @a: variable
 * @b: variable
 *Return: mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
