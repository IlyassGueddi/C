#include <stdio.h>

void swap(int *a, int *b, int y){
y = *a;
*a = *b;
*b = y;
}

int main(){
    int a = 10;
    int b = 20;
    int *x = &a;
    int *y = &b;
    int z;

    swap(x,y,z);

    printf("%d\t",a);
    printf("%p\n",&a);
    printf("%d\t",b);
    printf("%p\n",&b);

    return 0;
}