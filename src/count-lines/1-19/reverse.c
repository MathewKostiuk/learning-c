#include <stdio.h>

#define MAXLINE 100 /* maximum input line size */

int getline(char line[], int maxline);
void reverse(char s[], char r[]);

main()
{
  int len;
  char string[MAXLINE];
  char reversed[MAXLINE];

  while ((len = getline(string, MAXLINE)) > 0)
  {
    reverse(string, reversed);
    printf("%s\n", reversed);
  }

  return 0;
}

/* getline: read a line into s, return the length */
int getline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse(char s[], char r[])
{
  int size, i;

  size = 0;
  i = 0;

  while (s[i] != '\0')
    ++i;

  size = i;

  for (i=0; i < size; ++i)
    r[size - i] = s[i];
}
