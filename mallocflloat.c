#include <stdio.h>
#include <stdlib.h>

int main(){
    float *arr = malloc(8 * sizeof *arr);
    float somme = 0;
    for (int i = 0 ; i < 8 ; i++){
        float value;
        printf("give me the value %d: ", i+1);
        scanf("%f", &value);

        *(arr + i) = value;
        somme = somme + *(arr + i);
    }

    printf("the somme is : %f\n", somme);
    float average =  somme / 8;
    printf("the average is: %f\n", average);

    free(arr);

    return 0;
}