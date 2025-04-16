#include <stdio.h>

int main() {
    int thang, nam, songay;

    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    switch (thang) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            songay = 31;
            break;
        case 4: case 6: case 9: case 11:
            songay = 30;
            break;
        case 2:
            // Ki?m tra nam nhu?n
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                songay = 29;
            else
                songay = 28;
            break;
        default:
            printf("Thang khong hop le!\n");
            return 0;
    }

    printf("Thang %d nam %d co %d ngay.\n", thang, nam, songay);

    return 0;
}

