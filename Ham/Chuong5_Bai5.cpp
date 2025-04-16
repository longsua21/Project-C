#include <stdio.h>

void doiCoSo(int n, int base) {
    char kq[32]; 
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        int r = n % base;
        if (r < 10)
            kq[i++] = r + '0';   
        else
            kq[i++] = r - 10 + 'A'; 
        n = n / base;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", kq[j]);
}

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Chi xu ly so nguyen duong!\n");
        return 1;
    }

    printf("Dang nhi phan (co so 2): ");
    doiCoSo(n, 2);
    printf("\n");

    printf("Dang bat phan (co so 8): ");
    doiCoSo(n, 8);
    printf("\n");

    printf("Dang thap luc phan (co so 16): ");
    doiCoSo(n, 16);
    printf("\n");

    return 0;
}

