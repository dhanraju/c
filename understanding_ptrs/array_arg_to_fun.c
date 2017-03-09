#include <stdio.h>

void display(int *j, int arr_size);

int main() {
  int num[] = {24, 34, 12, 44, 56, 17};
  display(&num[0], 6);
  printf("\n");
}

void display(int *j, int arr_size) {
  int i=1;
  while(i <= arr_size) {
    printf("\nelement = %d", *j);
    i++;
    j++;
  }
}
