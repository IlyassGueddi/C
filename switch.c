#include <stdio.h>

int main(){
    int days = 1;

    switch(days){
        case 1:
            printf("it's  Monday");
            break;
        case 2:
            printf("it's  tuesday");
            break;
        case 3:
            printf("it's  wednesday");
            break;
        case 4:
            printf("it's  thursday");
            break;
        case 5:
            printf("it's  friday");
            break;
        case 6:
            printf("it's  saturday");
            break;
        case 7:
            printf("it's  sunday");
            break;
        default:
            printf("enter a value between 1 and 7!");
            break;
    }

    return 0;
}