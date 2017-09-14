/*
 * TODO(DHANU):
 * 1. Create a Makefile called Makefile_merge_arrays for this file.
 * 2. Rename this file as merge_arrays_usage.c
 * 3. Create separate .h and .c files for merge_arrays.
 * 4. Include arrays_ops.h file and reuse display function from it.
 */

#include <stdio.h>
#include <malloc.h>

#define MAX1 5
#define MAX2 7

int *arr;

int* create(int);
void sort(int *, int);
void display(int *, int);
int* merge(int *, int *);

int main() {
    int *a, *b, *c;

    printf("Elements for first Array:\n\n");
    a = create(MAX1);
    printf("Elements for second Array:\n\n");
    b = create(MAX2);

    sort(a, MAX1);
    sort(b, MAX2);

    printf("First Array:\n");
    display(a, MAX1);

    printf("Second Array:\n");
    display(b, MAX2);

    printf("After Merging:\n");
    c = merge(a, b);

    display(c, MAX1+MAX2);

    return 0;
}

/* Create array of given size, dynamically. */
int* create(int size) {
    /* Shift elements to right. */
    int *arr, i;
    arr = (int *)malloc(sizeof(int)* size);

    for(i=0; i<size; i++){
        printf("Enter the element no. %d: ", i+1);
	scanf("%d", &arr[i]);
    }
    printf("\n");
    return arr;
}

/* Sorts array in ascending order. */
void sort(int *arr, int size) {
    int i, temp, j;
    for(i=0; i<size; i++) {
        for(j=i+1; j<size; j++) {
	    if(arr[i] > arr[j]) {
	        temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }
}

/* Displays the contents of an array. */
void display(int *arr, int size) {
    /* Traverse the entire array. */
    int i;
    for(i=0; i<size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

/* Merges two arrays of different size. */
int* merge(int *a, int *b) {
    int *arr;
    int i,j,k;
    int size = MAX1 + MAX2;
    
    arr = (int *)malloc(sizeof(int) * (size));

    for(k=0,j=0,i=0; j<=size; i++) {
        if(a[k] < b[j]) {
            arr[i] = a[k];
	    k++;
	    if(k >= MAX1) {
                for(i++; j<MAX2; j++, i++)
		    arr[i] = b[j];
	    }
	}
	else {
  	    arr[i] = b[j];
	    j++;
	    if(j >= MAX2) {
		for(i++; j<MAX2; j++, i++)
		    arr[i] = b[j];
	    }
	}
    }
    return arr;
}

