#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int FahrToCels(int fahr);

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;
  printf("Fahrenheit\t Celsius\n");
  while (fahr <= upper)
  {
    celsius = FahrToCels(fahr);
    printf("%3.0f\t\t %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

int FahrToCels(int fahr)
{
  int celsius;

  celsius = (5.0 / 9.0) * (fahr - 32.0);
  return celsius;
}
