#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int n, m, p;

    // Nhap kích thuoc n, m, p
    printf("Nhap so dong cua ma tran A (n): ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran A / so dong cua ma tran B (m): ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran B (p): ");
    scanf("%d", &p);

    // Nhap ma tran A (n x m)
    printf("Nhap ma tran A (%dx%d):\n", n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Nhap ma tran B (m x p)
    printf("Nhap ma tran B (%dx%d):\n", m, p);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Tính tích ma tran C = A × B (n x p)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma tran A
    printf("\nMa tran A:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // In ma tran B
    printf("\nMa tran B:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // In ma tran C
    printf("\nTich ma tran C = A x B:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

