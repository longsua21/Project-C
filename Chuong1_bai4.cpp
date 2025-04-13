#include <stdio.h>
#include <math.h>

int main() {
    float R, S, V;
    const float PI = 3.14;

    printf("Nhap ban kinh hinh cau R: ");
    scanf("%f", &R);

    S = 4 * PI * pow(R, 2);
    V = (4.0 / 3) * PI * pow(R, 3);

    printf("Dien tich hinh cau: %.2f\n", S);
    printf("The tich hinh cau: %.2f\n", V);

    return 0;
}

