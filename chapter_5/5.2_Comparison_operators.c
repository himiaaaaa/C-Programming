#include <stdio.h>

int main(){
    char choice;
    int cup;

    printf("Do you drink coffee or tea (c/t)?");
    choice = getchar();

    printf("How many cups do you drink daily:");
    scanf("%d", &cup);

    if(choice == 'c'){
        if(cup <= 2){
            printf("You don't drink a lot of coffee, do you?\n");
        } else if (cup <= 20){
            printf("You drink a lot of coffee!\n");
        }
    }
    else if (choice == 't'){
        if(cup <= 2){
            printf("You do not drink a lot of tea.\n");
        } else if (cup <= 20){
            printf("You drink a lot of tea!\n");
        }
    }
    else{
         printf("An error occurred in the program!\n");
    }
    return 0;
}