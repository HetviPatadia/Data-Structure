#include <stdio.h>

int main() {
    int A[3][2], B[2][3], C[3][3];

    printf("Enter elements of first matrix (3x2):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix (2x3):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    // Multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}