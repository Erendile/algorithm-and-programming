#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    int bakiye = 500;
    printf("Cekmek istediginiz tutari girin: ");

    int tutar;
    scanf("%d", &tutar);
    // if tutar > bakiye
    // if bakiye >= tutar

    if (tutar > bakiye) {
        printf("Yetersiz bakiye\n");
    } else {
        bakiye = bakiye - tutar;
    }

    printf("guncel bakiye: %d", bakiye);
    return 0;
}
