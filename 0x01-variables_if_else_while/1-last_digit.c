#include <stdlib.h>
#include <time.h>
/**
 *main: main function
 *
 *Return: 
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 
 if(n % 10 > 5)
   {
   printf("Last digit of n ");
   }
 else if (n % 10 == 0)
   {
     printf("%i is", n);
   }
 else if (n % 10 < n)
   {
     printf("")
   }
  return (0);
}  
