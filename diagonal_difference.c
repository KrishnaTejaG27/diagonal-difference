// diagonal_difference.c
// Problem: Find the absolute difference between the two diagonals of a square matrix

#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int main_sum = 0, sec_sum = 0;

    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        main_sum += matrix[i][i];
        sec_sum += matrix[i][n - i - 1];
    }

    int difference = abs(main_sum - sec_sum);
    printf("Absolute Diagonal Difference: %d\n", difference);

    return 0;
}

