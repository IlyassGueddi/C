#include <stdio.h>

int main(){
    int a = 20;
    int b = 5;
    int c = -10;
    int d = 2;
    int x = 12;
    int y = 15;

    printf("%d\n", (5*x)+2* ((3*b)+4));
    printf("%d\n", (5*(x+2)*3)*(b+4));
    printf("%d\n", a == (b=5));
    printf("%d\n", a += (x+5));
    printf("%d\n", a != (c *= (-d)));
    printf("%d\n", a *= c+(x-d));
    printf("%d\n", a %=d++);
    printf("%d\n", a %=++d);
    printf("%d\n", (x++)*(a+c));
    printf("%d\n", a =x*(b<c)+y*!(b<c));

    return 0;
}