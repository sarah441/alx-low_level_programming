#include <stdio.h>
/**
* main - entry point
* Prints the size of various types.
*
* Return: always 0 (success)
*/
int main(void)
{
printf("size of char: %lu\n", sizeof(char));
printf("Size of int: %lu\n", sizeof(int));
printf("Size of long int: %lu\n", sizeof(long int));
printf("Size of long long int: %lu\n", sizeof(long long int));
printf("Size of float: %lu\n", sizeof(float));
return (0);

}
