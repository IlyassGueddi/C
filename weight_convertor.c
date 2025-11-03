#include <stdio.h>

int main(){
    float weight = 0.0f;
    char unit ;

    printf("enter the weight: ");
    scanf("%f", &weight);
    printf("What is the unit of output? (K/L): ");
    scanf(" %c", &unit);

    if(unit == 'K'){
        weight = weight * 2.20462;
        printf("the weight in Lb is %.3fLb.\n\n", weight);
    }else if(unit == 'L'){
        weight = weight * 0.453592;
        printf("the weight in Kg is %fKg\n\n", weight);
    }else{
        printf("Invalid Value");
    }

    return 0;
}