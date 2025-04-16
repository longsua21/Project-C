#include <stdio.h>

int main() {
    int arr[100], n;
    int tong = 0, tongDuong = 0, tongAm = 0;
    int demDuong = 0, demAm = 0;

    // Nh?p s? ph?n t?
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Nh?p m?ng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        tong += arr[i];

        if (arr[i] > 0) {
            tongDuong += arr[i];
            demDuong++;
        } else if (arr[i] < 0) {
            tongAm += arr[i];
            demAm++;
        }
    }

    // In k?t qu?
    printf("\nTong cac phan tu: %d\n", tong);
    printf("Tong cac so duong: %d\n", tongDuong);
    printf("Tong cac so am: %d\n", tongAm);

    printf("Trung binh cong ca mang: %.2f\n", (float)tong / n);
    
    if (demDuong > 0)
        printf("TBC so duong: %.2f\n", (float)tongDuong / demDuong);
    else
        printf("Khong co so duong de tinh TBC\n");

    if (demAm > 0)
        printf("TBC so am: %.2f\n", (float)tongAm / demAm);
    else
        printf("Khong co so am de tinh TBC\n");

    return 0;
}

