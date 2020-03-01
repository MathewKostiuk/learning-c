#include <stdio.h>

#define IN 1  /* Inside a word */
#define OUT 0 /* Outside a word */

main()
{
  int c, state;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      printf("\n");
    else
      putchar(c);
  }
}
