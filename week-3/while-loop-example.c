#include <stdio.h>
//1 ILE 100 ARASINDA BIR SAYI STATIK OLARAK BELIRLENECEK
// ORNEK int sayi = 58;
//KULLANICININ TAHMININE GORE DIREKTIFLER VERILEREK
//SAYIYI TAHMIN ETMESI SAGLANACAK
//KAC ADIMDA SAYIYI TAHMIN ETTIGI BILGISI DONULECEK
int main() {
    int sayi = 58, tahmin, adim = 0;
    printf("1 - 100 arasinda bir sayi tahmin edin:\n");
    while(1) {
        scanf("%d", &tahmin);
        adim++; // adim = adim + 1, adim += 1, ++adim
        if (tahmin == sayi) {
            printf("tebrikler\n");
            break;
        } else if (tahmin > sayi) {
            printf("daha kucuk bir tahminde bulun\n");
        } else {
            printf("daha buyuk bir tahminde bulun\n");
        }
    }
    printf("%d adimda sayiyi buldun", adim);
    return 0;
}
