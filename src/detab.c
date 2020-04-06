/* Write a program detab that replaces tabs in the input with the
proper number of blanks to space to the next tab stop. Assume a fixed
set of tab stops, say every n columns. Should n be a variable or a
symbolic parameter? */

#include <stdio.h>

int detab(int tab, int tab_stop);

main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      detab(c, 2);
    }
    else
    {
      putchar(c);
    }
  }
}

/* detab: convert tab into spaces, determined by tab_stop */
int detab(int tab, int tab_stop)
{
  int i;

  for (i = 0; i < tab_stop; ++i)
    putchar(' ');
}
