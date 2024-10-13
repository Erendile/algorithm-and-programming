#include <stdio.h>
/*
 *kullanıcının girdiği vize ve final notlarını
 *kullanarak, ortalama hesaplayan program
 */
/*
 *input: 60, 80
 *output: ortalama: 72
 */
int main() {
    int vize;
    int final;
    scanf("%d", &vize);
    scanf("%d", &final);

    int ortalama = (int) (0.4 * vize + 0.6 * final);
    printf("ortalama: %d\n", ortalama);
    return 0;
}
