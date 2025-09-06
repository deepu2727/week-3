// Write a progam that reads a square matrix of size n*n. Write a function int isUpperTriangula (int a[][],int n) that returnss 1 if matrix is upper triangular (Hint: Array A is upper triangular if Aij = 0 and i>j) 

// Function to check if matrix is upper triangular
int isUpperTriangular(int a[20][20], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {  // elements below diagonal
            if (a[i][j] != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // It is upper triangular
}

int main() {
    int n, i, j;
    int a[20][20];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (isUpperTriangular(a, n))
        printf("The matrix is an UPPER TRIANGULAR matrix.\n");
    else
        printf("The matrix is NOT an upper triangular matrix.\n");

    return 0;
}
