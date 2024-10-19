#include <stdio.h>
// io -> Input/Output
int main()
{
    // Eren -> {'e', 'r', 'e', 'n'}
    char name[] = "Eren";
    int age = 23;
    float mean;
    char isActive = 'y';
    // int -> tam sayi, float -> ondalikli sayi, char -> karakter
    printf("Name: %s\n", name);
    // s -> string - kelime - char array
    printf("Age: %d\n", age);
    printf("IsActive: %c\n", isActive);

    int midterm;
    int final;

    printf("Enter Your Midterm Point: ");
    scanf("%d", &midterm);
    printf("Enter Your Final Point: ");
    scanf("%d", &final);

    mean = (0.4 * midterm) + (0.6 * final);
    //mean = 2.5;
    printf("Mean: %f\n", mean);
    return 0;
}
