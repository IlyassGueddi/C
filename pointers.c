#include <stdio.h>

void changevaluep(int *x){
    *x = 200;
    // changethe variable it self
}

void changevaluen(int y){
    y = 200;
    // change just a copy of the variable 
}

int main(){
    
    int a = 10;
    int b = 20;

    changevaluep(&a);
    changevaluen(b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
    
}