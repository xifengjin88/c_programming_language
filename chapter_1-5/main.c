#include <stdio.h>

int main(void)
{
  int cn, wn;
  int c;

  cn = wn = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      ++wn;
    }
    else
    {

      ++cn;
    }
  }

  printf("words: %d\ncharacters: %d\n", wn, cn);
}