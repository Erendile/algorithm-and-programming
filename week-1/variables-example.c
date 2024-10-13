#include <stdio.h>
/*
 *kullanıcının girdiği 2 TAM SAYININ
 *toplam ve çarpım değerlerini gösteren program
 */
/*
 *input: 2, 5
 *output: toplam: 7, carpim: 10
 */
int main() {
    int sayi1;
    int sayi2;

    scanf("%d %d", &sayi1, &sayi2);
    printf("toplam: %d, carpim: %d", sayi1 + sayi2, sayi1 * sayi2);
    return 0;
}
