#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void quiz (char Question [5][100]){
    for (int i =0; i < 5 ;i++ ){
                for (int j = 0; j < 100; j++){
                    printf("%c", Question[i][j]);
                }
            }
}

void cases(char Tanswer, char answer) {
    if (answer == Tanswer){
        printf("True , congratilations!\n\n");
    }else {
        printf("false , good luck next time!\n\n");
    }

}



int main(){

    while(true){
        char play = ' ';
        printf("Do you want to test you computer science skills? (Y,N): " );
        scanf(" %c", &play);

        if (play == 'Y'){

                char quiz1 [5][100] = {"What data type is used to store whole numbers in C\n\n",
                        "A) float\n",
                        "B) char\n",
                        "C) int\n",
                        "D) double\n\n"};

                char quiz2 [5][100] = {"What does the function printf() do\n\n",
                                    "A) Prints text to the screen\n",
                                    "B) Reads user input\n",
                                    "C) Performs a calculation\n",
                                    "D) Stops the program\n\n"};
                
                char quiz3 [5][100] = {"Which keyword is used to define a constant value\n\n",
                                    "A) #define\n",
                                    "B) const\n",
                                    "C) static\n",
                                    "D) fixed\n\n"};

                srand(time(NULL));
                int rannum = rand() %3 + 1;

                switch (rannum){
                    case 1:

                        quiz(quiz1);

                        char answer1 = ' ';
                        printf("\n what is your answer : ");
                        scanf(" %c", &answer1);

                        cases('C', answer1);
                        break;
                    case 2:

                        quiz(quiz2);
                        
                        char answer2 = ' ';
                        printf("\n what is your answer : ");
                        scanf(" %c", &answer2);

                        cases('A', answer2);

                        break;

                    case 3:

                        quiz(quiz3);

                        char answer3 = ' ';
                        printf("\n what is your answer : ");
                        scanf(" %c", &answer3);

                        cases('B', answer3);
                        break;
                    default:
                        break;
                    }


        }else if (play == 'N'){
            printf("Good Bye");
            break;
        }else {
            printf("invalid value! ");
        }
    }



    return 0;
}
