#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grind(int width, int height);
void free_grind(int **grid, int height);
char *argstotr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
