#include <stdio.h>

int main()
{
  char a[10];
  int num = 2000;

  sprintf(a, "%d", num);

  puts(a);
}
