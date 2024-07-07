#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main() {
  int celsius;
  int lower = 0;    /* lower limit of temperature */
  int upper = 300;  /* upper limit of temperature */
  int step = 20;    /* step size */

  int fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
