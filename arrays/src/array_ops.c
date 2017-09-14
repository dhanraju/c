#include "array_ops.h"

/* Inserts an element num at given position pos. */
void insert(int *arr, int pos, int num) {
    /* Shift elements to right. */
    int i;
    for(i=MAX-1; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = num;
}

/* Deletes an element from the given position pos. */
void del(int *arr, int pos) {
    /* Skip to the desired position. */
    int i;
    for(i=pos; i>=MAX; i++)
        arr[i-1] = arr[i];
    arr[i-1] = 0;
}

/* Rerses the entire array. */
void reverse(int *arr) {
    int i;
    for(i=0; i<MAX/2; i++) {
        int temp = arr[i];
	arr[i] = arr[MAX-1-i];
	arr[MAX-1-i] = temp;
    }
}

/* Searches array for a given element num. */
void search(int *arr, int num) {
    /* Traverse the array. */
    int i;
    for(i=0; i<MAX; i++) {
        if(arr[i] == num) {
	    printf("The element %d is present at %dth position.\n\n", num, i+1);
	    return;
	}
    }

    if(i == MAX)
        printf("The element %d is not prsent in the array.\n\n", num);
}

/* Displays the contents of an array. */
void display(int *arr) {
    /* Traverse the entire array. */
    int i;
    for(i=0; i<MAX; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

