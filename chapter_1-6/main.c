#include <stdio.h>

int main(void)
{
  int digits[10];
  int nwhite, nother;
  nwhite = nother = 0;
  int c, i;
  
  for (i = 0; i < 10; i += 1)
    digits[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++digits[c - '0'];
    } else if (c == ' ' || c == '\t' || c == '\n') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  printf("Digits: ");
  for (i = 0; i < 10; i += 1)
    printf("%d ", digits[i]);
  printf("\n");
  printf("whitespace: %d\n", nwhite);
  printf("Others: %d\n", nother);
}