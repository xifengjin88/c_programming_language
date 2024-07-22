#include <stdio.h>

#define NUM_CHARACTERS 1000
#define OUT 1
#define IN 0

int main(void)
{
  int c, i;
  int num_length[NUM_CHARACTERS];
  int wn, cn;
  wn = cn = 0;

  for (i = 0; i < NUM_CHARACTERS; i += 1)
    num_length[i] = 0;
  int state = OUT;
  while ((c = getchar()) != EOF)
  {
    
    if (c == ' ' || c == '\t' || c == '\n')
    {
      state = OUT;
      ++num_length[cn];
    
      cn = 0;

    }
    else if (state == OUT)
    {
      ++cn;
      state = IN;
      
    } else {
      ++cn;
    }
  }

  for (i = 0; i < NUM_CHARACTERS; i += 1) {
    
    if (num_length[i] > 0) {
      printf("%d: ", i);
      for (int j = 0; j < num_length[i]; j += 1) {
        printf("-");
      }
      printf("\n");
    }
  }
}