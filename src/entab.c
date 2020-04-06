/*
Write a program called entab that replaces strings of blanks by the
minimum number of tabs and blanks to achieve the same spacing. Use the
same tab stops as for detabs. When either a tab or a single blank
would suffice to reach a tab stop, which should be given preference?
*/

#include <stdio.h>

#define MAXLENGTH 1000 /* maximum length of input */
#define TABSTOP 4 /* 1 tab equals 6 spaces */

void entab();

main()
{
  char s[MAXLENGTH] = {0};
  int spaces[TABSTOP] = {0};
  int i, j, k, l, c, tracker;
  i = tracker = 0;

  /* building the string array 's' */
  while ((c = getchar()) != EOF)
  {
    s[i] = c;
    ++i;
  }
  /* looping through the string 's' */
  for (j = 0; j < MAXLENGTH; ++j)
  {
    if (s[j] == ' ')
    {
      /* building the array of spaces */
      spaces[tracker] = s[j];
      ++tracker;
      if (tracker == TABSTOP)
      {
        tracker = 0;
        entab();
        for (l = 0; l < TABSTOP; ++l)
          spaces[l] = 0;
      }
    }
    else
    {
      /* restart spaces array at each non-space char */
      for (k = 0; k < TABSTOP; ++k)
      {
        if (spaces[k] != 0)
        {
          /* printing spaces that didn't make a tab */
          putchar(spaces[k]);
          spaces[k] = 0;
        }
      }
      tracker = 0;
      putchar(s[j]);
    }
  }
}

void entab()
{
  putchar('\t');
}

