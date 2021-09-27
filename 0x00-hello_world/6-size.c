#include <stdio.h>
/**
 *
 */
int intVar;
float floatVar;
char charVar;
long int longVar;
long long int longLongVar;
printf("Size of a char: %d byte(s)\n", sizeof(charVar));
printf("Size of an int: %d byte(s)\n", sizeof(intVar));
printf("Size of a long int: %d byte(s)\n", sizeof(longVar));
printf("Size of a long long int: %d byte(s)\n", sizeof(longLongVar));
printf("Size of a float int: %f byte(s)\n", sizeof(floatVar));
    return 0;
}
