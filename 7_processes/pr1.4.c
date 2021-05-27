#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  long max = 10;
  int i = 0;
  if (argc > 1)
    max = strtol(argv[1], NULL, 10);
  for (p = environ; *p != NULL; p++){
    if (i < max)
      printf("%s\n", *p);
    i++;
   }
}
