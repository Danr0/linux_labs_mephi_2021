#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int total_vars = 0;
  int total_args = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    total_vars++;
    //printf("%s\n", *p); /* разыменование указателя */
  printf("Number of environment variables: %d\n", total_vars);
  for(int j = 0; j < argc; j++)
    total_args++;
  printf("Number of arguments variables: %d\n", total_args);
}
