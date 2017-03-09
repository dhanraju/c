#include <stdio.h>

int main() {
  int i = 3;
  int *j;
  int **k;

  j = &i;
  k = &j;

  printf("\n");
  printf("\nAddress of i = %u", &i); // address of i.
  printf("\nAddress of i = %u", j);  // value at j = address of i.
  printf("\nAddress of i = %u", *k);  // value at j = address of i.
  printf("\nAddress of j = %u", &j); // address of j.
  printf("\nAddress of j = %u", k);  // address of j.
  printf("\nAddress of k = %u", &k); // address of k.

  printf("\nValue of j = %u", j);
  printf("\nValue of k = %u", k);
  printf("\nValue of i = %u", i);
  printf("\nValue of i = %u", *(&i));
  printf("\nValue of i = %u", *j);
  printf("\nValue of i = %u", **k);
  printf("\n");

  return 0;
}

// How to compile:
// $ gcc -o ptr_to_prt ptr_to_prt.c -Wformat=0
