#include "gcd.h"

void process_find_gcd(int *const a, int *const b)
{
  int temp;

  while (*b != 0)
  {
    temp = *a % *b;
    *a = *b;
    *b = temp;

    /* to see visualisation of this process, uncomment the next line */
    // printf("first num = %d, second num = %d\n", *a, *b);
  }

  // at this point, *a is the GCD
}

const int find_gcd(int a, int b)
{
  int temp = a % b;
  return (temp == 0) ? b : find_gcd(b, temp);
}
