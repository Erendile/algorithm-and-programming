#include <stdio.h>

int main()
{
    int sayi1 = 10;
    int sayi2 = 20;
    char islem = '/';

    switch (islem) {
        case '+':
            printf("%d\n", sayi1 + sayi2);
        break;
        case '-':
            printf("%d\n", sayi1 - sayi2);
        break;
        case '*':
            printf("%d\n", sayi1 * sayi2);
        break;
        case '/':
            printf("%f\n", (float)sayi1 / (float)sayi2);
        break;
        default:
            printf("Gecersiz islem");
        break;
    }
    return 0;
}
