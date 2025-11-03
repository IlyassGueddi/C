#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    srand(time(NULL));
    char computer = ' ';
    int player = ' ';

    while (true){

        char play = ' ';
        printf("Do you want to play?? (Y/N): ");
        scanf(" %c", &play);

        if(play =='Y'){
            while(true){
                computer = rand()%3 +1; //1-P 2-R 3-S

                printf("what's your choice? (1-P 2-R 3-S): ");
                scanf(" %d", &player);
                
                switch(computer){
                    case 1:
                        switch(player){
                            case 1:
                                printf("There is no winner! ");
                                break;
                            case 2:
                                printf("Computer wins! ");
                                break;
                            case 3:
                                printf("You win! ");
                                break;
                            default:
                        }
                        break;
                    case 2:
                        switch(player){
                                case 1:
                                    printf("You win! ");
                                    break;
                                case 2:
                                    printf("There is no winner! ");
                                    break;
                                case 3:
                                    printf("Computer wins! ");
                                    break;
                                default:
                            }
                        break;
                    case 3:
                        switch(player){
                                case 1:
                                    printf("Computer wins! ");
                                    break;
                                case 2:
                                    printf("There is no winner! ");
                                    break;
                                case 3:
                                    printf("You win! ");
                                    break;
                                default:
                            }
                        break;
                    default:
                        break;
                }
                break;
            }
        }else if (play == 'N'){
            printf("Good Bye!");
            break;
        }else{
            printf("Invalid value");
            continue;
        }
        
        
    }
    
}