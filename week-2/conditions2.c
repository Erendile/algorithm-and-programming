#include <stdio.h>

int main()
{
    int not = 65;
    /*
    if (not > 85) {
        printf("A\n");
    }
    else if (not > 60) {
        printf("B\n");
    }
    else if (not > 40) {
        printf("C\n");
    }
    else if (not <= 40) {
        printf("F\n");
    }
    */
    if (not >= 85 && not <= 100) {
        printf("A\n");
    } else if (not >= 60 && not < 85) {
        printf("B\n");
    } else if (not >= 40 && not < 60) {
        printf("C\n");
    } else if (not < 40 && not >= 0) {
        printf("D\n");
    } else {
        printf("Gecersiz not girdiniz.\n");
    }
    return 0;
}
