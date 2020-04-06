#include <stdio.h>

/* counts digits, white space, others */
main()
{
  int c, i, j;
  int nwords[5] = {0, 0, 0, 0, 0};
  i = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
      ++i;
    else
      ++nwords[i];
  }
  for (i = 0; i < 5; ++i)
  {
    if (nwords[i] != 0)
    {
      for (j = 0; j < nwords[i]; ++j)
      {
        printf("*");
      }
      printf("\n");
    }
  }
}
