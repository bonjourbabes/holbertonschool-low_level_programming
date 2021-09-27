#include <stdio.h>
/**                                                                                                         
* main - printf prints "with proper grammar"                                                                
* prints - print                                                                                            
* Return: brings back zero                                                                                  
*/
int main()
{
int intVar;
float floatVar;
char charVar;
long int longVar;
 long long int longLongVar;
printf("Size of a char: %zu byte(s)\n", sizeof(charVar));
printf("Size of an int: %zu byte(s)\n", sizeof(intVar));
printf("Size of a long int: %zu byte(s)\n", sizeof(longVar));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongVar));
printf("Size of a float int: %zu byte(s)\n", sizeof(floatVar));
    return 0;
}
