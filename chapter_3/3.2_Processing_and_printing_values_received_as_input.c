#include <stdio.h>

int main(void){
    float markka;
    float euro;
    float conversion = 5.94573;

    printf("Enter an amount in FIM:") ;
    scanf("%f", &markka);
    euro = markka / conversion;
    printf("FIM converted to euro: %.2f\n", euro);

    return 0;
}