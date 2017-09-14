#include "array_ops.h"

#define MAX 5

int main() {
    int arr[5];

    insert(arr, 1, 11);
    insert(arr, 2, 12);
    insert(arr, 3, 13);
    insert(arr, 4, 14);
    insert(arr, 5, 15);
    
    printf("Elements of Array:\n");
    display(arr);

    del(arr, 4);  // 5th element.
    del(arr, 1);  // 2nd element.
    printf("After deletion:\n");
    display(arr);

    insert(arr, 2, 222);
    insert(arr, 5, 555);
    printf("After insertion:\n");
    display(arr);
    reverse(arr);
    printf("After reversing:\n");
    display(arr);
    search(arr, 222);
    search(arr, 666);

    return 0;
}
