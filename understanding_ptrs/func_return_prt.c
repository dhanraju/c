#include <stdio.h>

int main() {

  int *p;
  int *func(); // prototype declaration.
  p = func();
  printf("\nFunc returned address : %u", p);
  printf("\nValue at returned address: %d", *p);
  printf("\n");
  return 0;
}

int *func(){
  int i = 20;
  printf("\nAddress of i : %u", &i);
  return (&i);
}

// How to compile:
// $ gcc -o func_return_prt func_return_prt.c -Wformat=0 -Wno-return-local-addr
