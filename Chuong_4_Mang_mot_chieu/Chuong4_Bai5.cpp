#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    // Nh?p s? lu?ng ph?n t? c?a m?ng
    printf("Nh?p s? lu?ng ph?n t? c?a m?ng: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Nh?p các ph?n t? c?a m?ng
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nh?p ph?n t? c?n d?m
    printf("Nh?p ph?n t? x c?n d?m s? l?n xu?t hi?n: ");
    scanf("%d", &x);
    
    // Ð?m s? l?n xu?t hi?n c?a x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    // In k?t qu?
    printf("Ph?n t? %d xu?t hi?n %d l?n trong m?ng.\n", x, count);
    
    return 0;
}
