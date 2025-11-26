#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char category[30];
    float price;
    int quantity;
}product;

typedef struct {
    int id;
    char name[50];
    int phone;
    char email;
}client;

typedef struct {
    int id;
    int client_id;
    int product_id;
    int quantity;
    float total_price;
}order;

void first_choice(int *choice);
void first_menu();
int choice;
int *ch = &choice;
int i = 0;
int *ii = &i;

product products[250];
client clients [100];
order orders [350];

int main(){

    while (true){
        first_menu();
        first_choice(ch);
        
        if (choice ==  1){
            int c;
            char name[50];
            char category [30];
            float price;
            int quantity;

            printf("give me the name of the product: ");
            fgets(name, sizeof(name), stdin);
            while ((c = getchar()) != '\n' && c != EOF);
            name[strcspn(name, "\n")] = 0;
            printf("give me the category of the product: ");
            fgets(category, sizeof(category), stdin);
            category[strcspn(category, "\n")] = 0;
            printf("give me the price of the product: ");
            scanf("%f", &price);
            printf("give me the quantity of the product: ");
            scanf("%d", &quantity);

            products[i].id = i + 1;
            strcpy(products[i].name, name);
            strcpy(products[i].category, category);
            products[i].price = price;
            products[i].quantity = quantity;

            ii++;

            for (int i = 0 ; i<250 ; i++){
                printf("%d :: %s   %s   :  %.2f   %d", products[i].id, products[i].name, products[i].category, products[i].price, products[i].quantity);
            }

            break;
        }else if (choice == 2){

        }else if (choice == 3){

        }else if (choice == 4){

        }else {

        }

        
    }
    
    return 0;
}

void first_menu(){
    printf("[1] Add new product\n");
    printf("[2] Set the price and quantity\n");
    printf("[3] Delete a product\n");
    printf("[4] Exit\n");
}
void first_choice(int *choice){
    printf("\nChoose a number: ");
    scanf("%d", choice);
}