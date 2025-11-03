#include <stdio.h>

int main(){

    int age = 0;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age < 18){
        printf("you are a child.\n");
    }else if (age >= 18){
        printf("you are now an adult.\n");
    }else {
        printf("invalid value!\n");
    }


}