#include "holberton.h"
#include "2-strlen.c"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int *first = a;
int *last = a + n - 1;
while (first < last)
{
int temp = *first;
*first = *last;
*last = temp;
first++;
last--;
}
}
