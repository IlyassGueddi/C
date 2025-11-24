#include <stdio.h>
#include <math.h>

float P, A, B, C, Scarre, S;

int main(){

    printf("donne moi la valeur de A: ");
    scanf("%f", &A);
    printf("donne moi la valeur de B: ");
    scanf("%f", &B);
    printf("donne moi la valeur de C: ");
    scanf("%f", &C);
    printf("donne moi la valeur de P: ");
    scanf("%f", &P);


    Scarre = P * (P-A) * (P-B) * (P-C);
    S = sqrt(Scarre);


    return 0;
}