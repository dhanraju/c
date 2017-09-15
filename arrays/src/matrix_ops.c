/*
 * Compilation command: gcc <filename>.c -lm
 * lm flag used to bypass "undefined reference to `pow'" error.
 * TODO(DHANU):
 * 1. Create a Makefile called Makefile_matrix_ops for this file.
 * 2. Rename this file as matrix_ops_usage.c
 * 3. Create separate .h and .c files for matrix_ops.
 */

#include <stdio.h>
#include <math.h>

#define MAX 3

void matrix(int [3][3]);
void create(int mat[3][3]);
void display(int mat[3][3]);
void matmul(int mat1[3][3], int mat2[3][3], int mat3[3][3]);
void transpose(int mat[3][3], int m[3][3]);
double determinant(int mat[3][3]);
int isortho(int mat[3][3]);

int main() {

    int mat[3][3];
    double d;

    printf("Elements for Array:\n\n");
    create(mat);

    printf("The Matrix:\n");
    display(mat);

    d = determinant(mat);
    printf("The determinant for given matrix: %d\n\n", d);

    if (d==0)
        printf("Matrix is singular.\n\n");
    else
	printf("Matrix is not singular.\n\n");

    d = isortho(mat);

    if (d!=0)
        printf("Matrix is orthogonal.\n\n");
    else
	printf("Matrix is not orthogonal.\n\n");

    return 0;
}

/* Initializes the matrix mat with 0. */
void matrix(int mat[3][3]) {
    int i,j;
    for(i=0; i<MAX; i++)
        for(j=0; j<MAX; j++)
	    mat[i][j] = 0;
}

/* Create matrix mat. */
void create(int mat[3][3]) {
    int n, i, j;

    for(i=0; i<MAX; i++){
	for(j=0; j<MAX; j++) {
            printf("Enter the element : ");
	    scanf("%d", &n);
	    mat[i][j] = n;
	}
    }
    printf("\n");
}

/* Displays the contents of matrix. */
void display(int mat[3][3]) {
    int i, j;
    for(i=0; i<MAX; i++){
	for(j=0; j<MAX; j++) 
	    printf("%d\t", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}

/* Multiplies two matrices. */
void matmul(int mat1[3][3], int mat2[3][3], int mat3[3][3]) {
    int i, j, k;
    for(k=0; k<MAX; k++){
	for(i=0; i<MAX; i++) {
	    mat3[k][i] = 0;
	    for(j=0; j<MAX; j++)
		mat3[k][i] += mat1[k][j] * mat2[j][i];
	}
    }
}

/* Obtains transpose of matrix m1. */
void transpose(int mat[3][3], int m[3][3]) {
    int i, j;
    for(i=0; i<MAX; i++){
	for(j=0; j<MAX; j++) 
	    m[i][j] = mat[j][i];
    }
}

/* Finds the determinant value for given matrix. */
double determinant(int mat[3][3]) {
    int i,j,k;
    double sum, p;
    sum=0.0; j=1; k=MAX-1;

    for(i=0; i<MAX; i++) {
	p = pow(-1.0, i);
	if(i == MAX-1)
	    k = 1;
	sum = sum + ( mat[0][i] * ( mat[1][j] *
				    mat[2][k] - mat[2][j] *
				    mat[1][k] ) ) * p;
	j = 0;
    }

    return sum;
}

/* Checks if given matrix is an orthogonal matrix. */
int isortho(int mat[3][3]) {
    /* Transpose the matrix. */
    int m1[3][3], m2[3][3];
    int i, j;
    transpose(mat, m1);

    /* Multiply the matrix with its transpose. */
    matmul(mat, m1, m2);

    /* Check for the identity matrix. */
    for(i=0; i<MAX; i++) {
        if(m2[i][i] == 1)
	    continue;
	else
	    break;
    }

    if(i==MAX)
        return 1;
    else
	return 0;
}

