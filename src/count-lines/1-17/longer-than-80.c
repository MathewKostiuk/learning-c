#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define THRESHOLD 80 /* Threshold for printing a line */

int getline(char line[], int maxline);

/* print longest input line */

main()
{
  int len;
  int max;
  char line[MAXLINE];

  max = 0;
  while ((len = getline(line, MAXLINE)) > 0)
    if (len > THRESHOLD)
    {
      printf("%s", line);
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
