#include <stdio.h>

int main(void){
    int integer, i;
    int result = 1;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    for(i = 1; i <= integer; i++){
        result *= i;
    }

    printf("The factorial of %d is %d\n", integer, result);

    return 0;
}