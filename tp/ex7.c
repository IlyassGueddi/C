#include <stdio.h>
#include <math.h>

double  DIST, XA,YA,XB,YB;

int main(){
    printf("donne moi la valeur de XA: ");
    scanf("%lf", &XA);
    printf("donne moi la valeur de YA: ");
    scanf("%lf", &YA);
    printf("donne moi la valeur de XB: ");
    scanf("%lf", &XB);
    printf("donne moi la valeur de YB: ");
    scanf("%lf", &YB);
    DIST = sqrt(pow((XA- YA), 2) + pow((XB - YB),2));
    return 0;
}