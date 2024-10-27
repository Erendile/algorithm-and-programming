#include <stdio.h>
// 1 ILE 20 ARASINDAKI CIFT SAYILARIN
// TOPLAMINI YAZDIRAN PROGRAM
// 5 % 2 -> 1, 4 % 2 -> 0
int main() {
    int toplam = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            toplam += i;
        }
    }

    printf("%d\n", toplam);
    return 0;
}
