#include <stdio.h>

int main(void)
{
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter a number of entries in table: ");
  scanf("%d", &n);

  for (odd = 3,
      square = 1,
      i = 1;
       i <= n; i++, square += odd, odd += 2)
    // because (n+1)^2 = (n^2) + (2n + 1)
    printf("%5d%8d\n", i, square);

  return 0;
}
