#include <stdio.h>

void happybirthday(char name[], int age){
    printf("happy birthday %s.", name);
    printf("your age now is %d year old.", age);
}

int main(){
    char nom[] = "ilyass";
    int age = 17;
    happybirthday(nom, age);
    return 0;
}
