#include <stdio.h>
#include <stdbool.h>

int main(){
    int num_secret = 15;
    int user_number;
    while(true){
        printf("give me a number between 1 and 100: ");
        scanf("%d", &user_number);
        if (user_number > 100 || user_number < 1){
            printf("between 1 and 100 \n");
        }else if (user_number == num_secret){
            printf("congratilation you win! ");
            break;
        }else if (user_number < num_secret){
            printf("go heigher\n");
        }else if (user_number > num_secret){
            printf("go lower\n");
        }else{
            printf("invalid value!");
        }
    }
    
    return 0;
}