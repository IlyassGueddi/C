#include <stdio.h>
#include <stdbool.h>

int main(){
    int dimmention;
    while(true){
        printf("entre la dimmentiondu tableau (<= 10): ");
        scanf("%d", &dimmention);

        if (dimmention > 10){
            printf("invalid value entre une nbr <= 10.\n");
        }else if(dimmention <= 0){
            printf("invalid value entre une nbr > 0.\n");
        }else {
            break;
        }
    }

    int tableau[dimmention];

    for (int i = 0 ; i < dimmention; i++){
        tableau[i] = 
    }

    return 0;
}