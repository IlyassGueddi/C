#include <stdio.h>

int main(){
    float a;
    float b;
    float s;

    printf("donne moi la valeur de a: ");
    scanf("%f", &a);
    printf("donne moi la valeur de b: ");
    scanf("%f", &b);
    
    s = a + b;
    float so = a - b;
    float mu = a * b;

    printf("a + b = %f\n", s );
    printf("a - b = %f\n", s );
    printf("a * b %f\n", s );

    return 0;
}