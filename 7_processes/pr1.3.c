#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int max = 10;
  int i = 0;
  for (p = environ; *p != NULL; p++){
    if (i < max)
      printf("%s\n", *p);
    i++;
   }
}
