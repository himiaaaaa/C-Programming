#include <stdio.h>

int main(void){
    int integer, i;
    printf("Enter an integer: ");
    scanf("%d", &integer);
    for( i = 1 ; i <= integer; i++ ){
        printf("%d\n", i);
    }
    return 0;
}