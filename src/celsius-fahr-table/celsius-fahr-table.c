#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 5;

  celsius = lower;
  printf("Celsius\t Fahrenheit\n");
  while (celsius <= upper) {
    fahr = (celsius / (5.0/9.0)) + 32.0;
    printf("%3.0f\t\t %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
