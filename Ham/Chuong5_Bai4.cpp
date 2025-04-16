#include <stdio.h>

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void xuatMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

void congMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void nhanMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int m, n, p;

    printf("Nhap so hang va cot cua ma tran A: ");
    scanf("%d%d", &m, &n);
    printf("Nhap ma tran A:\n");
    nhapMaTran(a, m, n);

    printf("Nhap so cot cua ma tran B: ");
    scanf("%d", &p);
    printf("Nhap ma tran B:\n");
    nhapMaTran(b, n, p); 

    printf("\nMa tran A:\n");
    xuatMaTran(a, m, n);
    printf("Ma tran B:\n");
    xuatMaTran(b, n, p);

    if (m == n && n == p) {
        congMaTran(a, b, c, m, n);
        printf("Tong hai ma tran:\n");
        xuatMaTran(c, m, n);
    } else {
        printf("Khong the cong vi kich thuoc khac nhau.\n");
    }

    nhanMaTran(a, b, c, m, n, p);
    printf("Tich hai ma tran:\n");
    xuatMaTran(c, m, p);

    return 0;
}

