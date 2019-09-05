#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  char ch;
  int i = 0;
  if ((fp = fopen("/home/vincent/test/ex/text", "rt")) == NULL)
    {
      printf("\n cannot open file");
      getchar();
      exit(1);
    }

  ch = fgetc(fp);
  while(ch!=EOF)
    {
      i++;
      putchar(ch);
      ch = fgetc(fp);
      if (ch == '\n')
        {
          printf("此处有换行符");
        }
    }
  fclose(fp);
}
