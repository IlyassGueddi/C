#include <stdio.h>

int main(){
    int num;
    float sum;

    printf("give me the number of grades you will enter: ");
    scanf("%d", &num);

    for (int i; i < num ; i++){
        float note;
        printf("note %d: ", i+1);
        scanf("%f", &note);
        sum = sum + note;

        if (i == num - 1){
            int moyenne = sum / i+1 ;
            printf("la moyenne de ces %d notes est : %.2f", i + 1, sum/(i+1) );
        }
    }

    return 0;
}