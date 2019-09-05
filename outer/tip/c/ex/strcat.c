#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  char c1[10] = "char1";
  char *c2 = "char1";
  char *c3 = "char1";

  puts(strcat(c1, c2));
}
