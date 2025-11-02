#include <stdio.h>
#include <math.h>

int main(){
    float r = 0.0f;
    float pi = 3.14159;
    float p = 0.0f;
    float A = 0.0f;

    printf("Enter the radius in Cm: ");
    scanf("%f", &r);

    p = r * 2 * pi;
    A = pow(r, 2) * pi;

    printf("the area of the circle is %.3f cm*cm, and his  circumference is %.3f cm", A,p);

    return 0;
}