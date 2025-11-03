#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    while(true){
        char play = ' ';
        printf("Do you want to play? (Y/N) ");
        scanf(" %c", &play);

        int MIN = 0;
        int MAX = 0;

        printf("what is the num you want to be the MIN: ");
        scanf("%d", &MIN);
        printf("what is the num you want to be the MAX: ");
        scanf("%d", &MAX);

        if (play == 'Y'){
            srand(time(NULL));
            int random_num = rand()% (MAX - MIN +1) + MIN;
            
            while(true){
                int guess = 0;
                printf("what do you think the number is: ");
                scanf("%d", &guess);
                
                if (guess == random_num){
                    printf("Congratilation, You win!!\n");
                    break;
                }else if (guess < random_num){
                    printf("go heigher!\n");
                    continue;
                }else if (guess > random_num){
                    printf("go lower!\n");
                    continue;
                }else{
                    printf("please entre a number!");
                }
            }

        }else if(play == 'N'){
            break;
        }else{
            printf("invalid value\n");
            continue;
        }

    }
    return 0;
}