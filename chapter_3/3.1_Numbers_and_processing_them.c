#include <stdio.h>

int main(){
    int number_one;
    float number_two;

    printf("Enter an integer: ");
    scanf("%d", &number_one);
    printf("Enter a decimal number: ");
    scanf("%f", &number_two);

    printf("You entered the integer: %d\n", number_one);
    printf("You entered the decimal number, rounded to two decimal places: %.2f\n", number_two);
    return 0;
}