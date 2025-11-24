#include <stdio.h>

float A;
float B;
float C;

int main(){
    printf("donne moi la valeur de A: ");
    scanf("%f", &A);
    printf("donne moi la valeur de B: ");
    scanf("%f", &B);
    printf("donne moi la valeur de C: ");
    scanf("%f", &C);

    A = B;
    B = C;
    C = A;

    printf("\nA = %.3f\n", A);
    printf("B = %.3f\n", B);
    printf("C = %.3f\n\n", C);

    return 0;
}