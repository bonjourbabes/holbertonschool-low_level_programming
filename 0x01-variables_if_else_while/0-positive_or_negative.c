#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - function for main
*return
* Return: returns main function
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero/n", n);
}
else if (n < 0)
{
printf("%d is negative/n", n);
}
else
{
}
return (0);
}
