#include <stdio.h>
#include <math.h>
// float % float = error 
int A;
int B;
float QR;
float quotion;
float reste;

int main(){
    printf("donne moi la valeur de A: ");
    scanf("%d", &A);
    printf("donne moi la valeur de B: ");
    scanf("%d", &B);

    quotion = A / B;
    reste = A % B;

    printf("\nle quotion de A et B est: %f\n", quotion);
    printf("le reste de quotion de A et B est: %f\n", reste);
    printf("le quotion rationnel est: %f\n\n",(float)A/B);
    

    return 0;
}