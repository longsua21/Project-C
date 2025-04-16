#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float p, s;

    printf("Nhap 3 canh cua tam giac (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Day la mot tam giac.\n");

        if (a == b && b == c) {
            printf("Tam giac deu.\n");
        } else if (a == b || b == c || a == c) {
            if (fabs(a*a + b*b - c*c) < 0.0001 ||
                fabs(a*a + c*c - b*b) < 0.0001 ||
                fabs(b*b + c*c - a*a) < 0.0001) {
                printf("Tam giac vuong can.\n");
            } else {
                printf("Tam giac can.\n");
            }
        } else if (fabs(a*a + b*b - c*c) < 0.0001 ||
                   fabs(a*a + c*c - b*b) < 0.0001 ||
                   fabs(b*b + c*c - a*a) < 0.0001) {
            printf("Tam giac vuong.\n");
        } else {
            printf("Tam giac thuong.\n");
        }

        s = sqrt(p * (p - a) * (p - b) * (p - c)); // Heron

        printf("Chu vi = %.2f\n", a + b + c);
        printf("Dien tich = %.2f\n", s);
    } else {
        printf("Ba canh nay KHONG tao thanh tam giac.\n");
    }

    return 0;
}

