#include <stdio.h>

int main() {
    //FOR
    /*
    for(int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    */
    // i + 1, i++

    //WHILE
    // boolean x, false -> {0, '\0'}, true ->  {0, '\0'}'
    /*
    int i = 0;
    while (1) {
        scanf("%d", &i);
        if(i == 10) {
            break;
        }
        printf("%d\n", i);
    }
    */
    //DO - WHILE
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while(i < 10);
    /*
    int a = 5;
    a++;
    // a++, a = a + 1, a += 1, ++a
    printf("%d\n", a++); output: 6
    printf("%d\n", a); output: 7
    */
}
