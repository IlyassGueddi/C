#include <stdio.h>

double R1, R2, R3, Rt;

int main(){

    printf("donne moi la valeur de R1: ");
    scanf("%lf", &R1);
    printf("donne moi la valeur de R2: ");
    scanf("%lf", &R2);
    printf("donne moi la valeur de R3: ");
    scanf("%lf", &R3);

    char user_choice;

    printf("est que les resistance sont branchee en serie ou en parallele (S/P): ");
    scanf("%c", &user_choice);
    printf("\n%c\n", user_choice);

    switch (user_choice)
    {
    case 'S':
        Rt = R1 + R2 + R3;
        printf("Rser = %lf", Rt);
        break;

    case 'P':
        Rt = (R1 * R2 * R3) * ( R1 * R2 + R1 * R3 + R2 * R3);
        printf("Rser = %lf", Rt);
        break;
    
    default:
        printf("invalid value!");
        break;
    }

    return 0;
}