#include <stdio.h>
#include <string.h>
int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float totale = 0.0f;

    printf("\nEnter the product name: ");
    fgets(item, sizeof(item), stdin);
    printf("Enter the price of the item: ");
    scanf("%f", &price);
    printf("Enter the quantity of the item: ");
    scanf("%i", &quantity);

    totale = price * quantity;
    printf("\nthe totale price of %i %s %.2f%c \n \n", quantity, item, totale, currency);

    return 0;
}