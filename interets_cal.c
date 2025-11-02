#include <stdio.h>
#include <math.h>

int main(){
    double P = 0.0f;
    double r = 0.0f;
    int n = 0;
    int t = 0.0f;
    double A = 0.0f;

    printf("Enter the principale amount: ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate: ");
    scanf("%lf", &r);
    printf("Enter the number of times interest applied per year: ");
    scanf("%d", &n);
    printf("Enter the number of years: ");
    scanf("%d", &t);

    A = P * pow(1 + (r/n), (n*t));
    printf("The final amount after %d years = %.5lf\n", t,A);


    return 0;
}