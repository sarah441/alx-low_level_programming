#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[]) {
  int z;

  if (argc == 3) {
    z = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", z);
    return 0;
  } else {
    printf("error\n");
    return 1;
  }
}
