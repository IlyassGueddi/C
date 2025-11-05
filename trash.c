#include <stdio.h>
#include <stdlib.h>

void quiz (char Question [5][100]){
    for (int i =0; i < 5 ;i++ ){
                for (int j = 0; j < 100; j++){
                    printf("%c", Question[i][j]);
                }
            }
}

void cases(char Tanswer, char answer) {
    switch (answer){
        case Tanswer:
            printf("True , congratilations!\n\n");
            break;
        default:
            printf("false , good luck next time!\n\n");
                break;
    }

}

int main(){
    char quiz1 [5][100] = {"What data type is used to store whole numbers in C\n\n",
                        "A) float\n",
                        "B) ilyass\n",
                        "C) int\n",
                        "D) double\n\n"};
    quiz(quiz1);

    return 0;
}