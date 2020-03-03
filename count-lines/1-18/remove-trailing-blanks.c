#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define IN 1         /* Inside a word */
#define OUT 0        /* Outside a word */

int getline(char line[], int maxline);
void formatline(char input[], char output[]);

/* print longest input line */

main()
{
  int len;
  char line[MAXLINE];
  char newLine[MAXLINE];

  while ((len = getline(line, MAXLINE)) > 0)
    {
      formatline(line, newLine);
      printf("%s", newLine);
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

void formatline(char input[], char output[])
{
  int i, j, state;

  i = 0;
  j = 0;
  state = OUT;

  for (i=0; i < MAXLINE; ++i)
  {
    if (state == OUT && input[i] != '\t' && input[i] != ' ')
    {
      state = IN;
      output[j] = input[i];
      ++j;
    }
    else if (state == IN)
    {
      output[j] = input[i];
      ++j;
    }
  }

  state = OUT;

  for (i=MAXLINE; i >= 0; --i)
  {
    if (state == OUT && input[i] != '\t' && input[i] != ' ')
    {
      state = IN;
      output[j] = input[i];
      ++j;
    }
    else if (state == IN)
    {
      output[j] = input[i];
      ++j;
    }
  }
}
