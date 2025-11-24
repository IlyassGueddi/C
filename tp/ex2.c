#include <stdio.h>
#include <math.h>

float pi = 3.14;

int main(){
    float r;
    printf("donne moi le rayon du cercle: ");
    scanf("%f", &r);
    
    float aire = pi * pow(r,2) ;
    float perimetre = 2*pi*r;

    printf("\nl'aire du cercle est : %.4f\n", aire);
    printf("le perimetre du cercle est : %.4f\n", perimetre);

    return 0;
}