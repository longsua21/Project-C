#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);

    printf("Nhap thang: ");
    scanf("%d", &month);

    printf("Nhap nam: ");
    scanf("%d", &year);

    printf("Ngay ban nhap la: %02d/%02d/%04d\n", day, month, year);

    return 0;
}

