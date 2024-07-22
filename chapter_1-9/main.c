#include <stdio.h>

#define MAX_LINE 10000

int get_line(char line[], int max_line);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int len);

int main(void)
{
  int max = 0;
  char line[MAX_LINE];
  char reversed_line[MAX_LINE];
  char longest[MAX_LINE];
  int len;

  while ((len = get_line(line, MAX_LINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
      reverse(reversed_line, line, len);
      printf("%s", reversed_line);
    }
  }
  if (max > 0)
  {
    printf("%s\n", longest);
  }
  return 0;
}

int get_line(char a[], int lim)
{
  int i;
  char c;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  {
    a[i] = c;
  }
  if (c == '\n')
  {
    a[i] = c;
    ++i;
  }
  a[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;
  for (i = 0; (to[i] = from[i]) != '\0'; i += 1)
    ;
}

void reverse(char to[], char from[], int len)
{
  int i = 0;
  len -= 2;
  while (len >= 0) {
    to[i] = from[len];
    i += 1 ;
    len -= 1;
  }
  to[i++] = '\n';
  to[i] = '\0';
}
