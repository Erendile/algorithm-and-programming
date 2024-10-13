#include <stdio.h>

int main() {
    int sayi;
    sayi = 5;
    char karakter = 'c';
    float ondalikliSayi = 3.14;
    
    /*
    printf("sayi: %d\n", sayi);
    printf("ondalikliSayi: %f\n", ondalikliSayi);
    printf("karakter: %c\n", karakter);

    /*
     int -> %d
     float -> %f
     char -> %c
     */

    scanf(" %c", &karakter);
    scanf("%f", &ondalikliSayi);
    scanf("%d", &sayi);

    printf("karakter: %c\n", karakter);
    printf("ondalikliSayi: %f\n", ondalikliSayi);
    printf("sayi: %d\n", sayi);
    return 0;
}
