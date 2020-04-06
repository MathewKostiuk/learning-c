/* Write a program to "fold" long input lines into two or more shorter
lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent
with very long lines, and if there are no blanks or tabs before the
specified columns. */

#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 20 /* break onto new-line at this point */
#define MAX_INPUT 1000 /* Maximum size of input */

main()
{
  int c, i, round, temp_max;
  char s[MAX_INPUT] = { 0 };

  i = 0;
  round = 0;
  temp_max = MAX_LINE;
  /* build an array of characters */
  while ((c = getchar()) != EOF)
  {
    if (i == temp_max)
    {
      ++round;
      s[i] = '\n';
      ++i;
      temp_max = temp_max + MAX_LINE + 1;
      s[i] = c;
      ++i;
    }
    else
    {
      s[i] = c;
      ++i;
    }
  }
  printf("%s\n", s);
}
