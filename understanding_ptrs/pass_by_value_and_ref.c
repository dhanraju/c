#include <stdio.h>
void swapr(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}

void swapv(int x, int y) {
  int t;
  t = x;
  x = y;
  y = t;
}

int main() {
  int a = 10;
  int b = 20;

  printf("\nBefore swap a = %d, b = %d\n", a, b);

  swapv(a, b);
  printf("\nwith swapv a = %d, b = %d\n", a, b);

  swapr(&a, &b);
  printf("\nwith swapr a = %d, b = %d\n", a, b);

  return 0;
}
