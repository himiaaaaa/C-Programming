#include <stdio.h>

int main(void){
    int number1, number2;
    printf("Enter the first number:");
    scanf("%d", &number1);
    printf("Enter the second number:");
    scanf("%d", &number2);

    printf("\n");
    printf("%d+%d=%d\n", number1, number2, number1 + number2);
    printf("%d-%d=%d\n", number1, number2, number1 - number2);
    printf("%d*%d=%d\n", number1, number2, number1 * number2);

    return 0;
}