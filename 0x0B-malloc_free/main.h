#ifndef MAIN_H
#define MAIN_H

char *argstostr(int ac, char **av);
char **strtow(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
