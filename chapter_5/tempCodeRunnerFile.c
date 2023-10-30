#include <stdio.h>

int main(){
    int function;
    int num1;
    int num2;

    printf("1: subtraction\n");
    printf("2: addition\n");
    printf("3: multiplication\n");
    printf("Select function:\n");
    scanf("%d", &function);

    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    switch(function){
        case 1:
        {
            printf("%d-%d=%d",num1,num2,num1-num2);
            break;
        }
        case 2:
        {
            printf("%d+%d=%d",num1,num2,num1+num2);
        }
        case 3:
        {
            printf("%d*%d=%d",num1,num2,num1*num2);
        }
    }
    return 0;
}