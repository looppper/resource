/*
 * writer: vincent
 * date:   April 02, 2017, 19:55
 *
 * feature: the c function fprintf()
 *
 */


#include <stdio.h>

int main()
{
  FILE *pFile;
  int n;
  char name[100];

  pFile = fopen("/home/vincent/test/ex/test", "w");
  for (n=0; n<3; n++)
    {
      puts("please, enter a name");
      gets(name);
      fprintf(pFile, "name %d [%-10.10s]\n", n+1, name);
    }
  fclose(pFile);
}
