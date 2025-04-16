#include <stdio.h>

int main() {
    int i;

    printf("Cac so duong chan tu 1 den 20 la:\n");
    for (i = 2; i <= 20; i += 2) {
        printf("%d\t", i);
    }

    printf("\n");

    return 0;
}

