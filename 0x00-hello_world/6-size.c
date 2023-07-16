#include <stdio.h>
/**
* main - entry point
* Prints the size of various types.
*
* Return: always 0 (success)
*/
int main(void)
{

printf("Size of int: %lu\n", sizeof(int));
printf("Size of char: %lu\n", sizeof(char));
printf("Size of float: %lu\n", sizeof(float));
printf("Size of double: %lu\n", sizeof(double));
printf("Size of long int: %lu\n", sizeof(long int));
printf("Size of long long int: %lu\n", sizeof(long long int));
return 0;

}
