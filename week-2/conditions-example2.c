#include <stdio.h>
/*
 * KULLANICIDAN ALINAN 2 SAYI VE BİR MATEMATİKSEL OPERATOR ALINACAK
 * OPERATORLER = {'+', '-', '*', '/'}
 * ALINANAN OPERATORE GORE ISLEM YAPILIP SONUCU GOSTERILECEK
 *
 * CASE 1:
 *  INPUT: 10, 20, '+'
 *  OUTPUT: 30
 * CASE 2:
 *  INPUT: 10, 20, '*'
 *  OUTPUT: 200
 */
// scanf(" %c", &islem);
int main()
{
    int sayi1, sayi2;
    float sonuc;
    char islem;

    scanf("%d %d", &sayi1, &sayi2);
    scanf(" %c", &islem);

    if (islem == '+') {
        sonuc = sayi1 + sayi2;
    } else if (islem == '-') {
        sonuc = sayi1 - sayi2;
    } else if (islem == '*') {
        sonuc = sayi1 * sayi2;
    } else if (islem == '/') {
        sonuc =(float)sayi1 / (float)sayi2;
    }
    printf("sonuc: %f", sonuc);
    return 0;
}
