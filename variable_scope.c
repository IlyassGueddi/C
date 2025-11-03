#include <stdio.h>

int y = 20; // global variable

void example() {
    static int count = 0; //static variable
    int x= 10; //local varible
    printf("%d\n", x);
}

int main(){
    int z = 30;//block variable
    return 0;
}