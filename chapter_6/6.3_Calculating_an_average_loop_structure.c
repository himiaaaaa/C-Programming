#include <stdio.h>

int main(void){
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    int score, num= 0;
    float sum = 0, average;
    do{
        printf("Enter score (4-10):");
        scanf("%d", &score);

        if(score >= 4 && score <= 10){
            sum += score;
            num++;
        }
    } while (score >= 0);

    average = sum / num;

    printf("You entered %d scores.\n", num);
    printf("Average score: %.2f\n", average);
    
    return 0;
}