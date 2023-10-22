#include <stdio.h>

int main(void){
    int number, square;
    printf("Enter an integer: ");
    scanf("%d", &number);
    square = number * number;
    printf("The square of the number you entered is %d\n", square);
    return 0;
}