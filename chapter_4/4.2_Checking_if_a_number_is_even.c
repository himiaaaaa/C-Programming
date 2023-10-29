#include <stdio.h>

int main(void){
    int number;
    printf("Enter an integer:");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("The number is 0\n");
    else
        printf("The number is 1\n");
}