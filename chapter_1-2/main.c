// c = (5 / 9) * (f - 32)

#include <stdio.h>

int main(void)
{
  float f, c;
  int lower = 0.0;
  int upper = 300;
  int step = 20;
  
  
  // while (lower <= upper) {
  //   f = lower;
  //   c = (5.0 / 9.0) * (f - 32.0);
  //   printf("%6.0f\t%6.1f\n", f, c);
  //   lower += step;
  // }



  while (lower <= upper) {
    c = lower;
    f = (c * 9.0 / 5.0) + 32.0;
    printf("%6.0f\t%6.2f\n", c, f);
    lower += step;
  }
}
