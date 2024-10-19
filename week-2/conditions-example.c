#include <stdio.h>

/* KULLANICIDAN ALINAN 2 SAYININ ARASINDAKI FARKI YAZDIRAN
 * PROGRAM
 * CASE 1:
 *  INPUT: 10, 20
 *  OUTPUT: 10
 * CASE 2:
 *  INPUT: 20, 10
 *  OUTPUT: 10
 * CASE 3:
 *  INPUT: 10, 10
 *  OUTPUT: 0
*/
int main()
{
    int sayi1, sayi2;
    scanf("%d %d", &sayi1, &sayi2);
    int sonuc;
    if (sayi1 > sayi2) {
        sonuc = sayi1 - sayi2;
    } else {
        sonuc = sayi2 - sayi1;
    }
    printf("sonuc: %d\n", sonuc);
    return 0;
}
