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

            while ((c = getchar()) != '\n' && c != EOF);
            printf("give me the name of the product: ");
            fgets(name, sizeof(name), stdin);
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


            for (int j = 0 ; j <= i ; j++){
                if (i == j && i == 0){
                    printf("\n\n%d :: %s ; %s   :  %.2f ; %d\n\n", products[j].id, products[j].name, products[j].category, products[j].price, products[j].quantity);
                }else if (i == j){
                    printf("%d :: %s ; %s   :  %.2f ; %d\n\n", products[j].id, products[j].name, products[j].category, products[j].price, products[j].quantity);
                }else{
                    printf("%d :: %s ; %s   :  %.2f ; %d\n", products[j].id, products[j].name, products[j].category, products[j].price, products[j].quantity);
                }
                
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

/*
FILE *fp = fopen("products.txt", "r");
    if (fp != NULL) {
        while (1) {
            i++;
            // read according to your format: id :: name ; category   : price ; quantity
            if (fscanf(fp, "%d :: %49[^;] ; %29[^:]: %f ; %d\n",
                       &products[i].id,
                       products[i].name,
                       products[i].category,
                       &products[i].price,
                       &products[i].quantity) != 5) {
                i--; // adjust index if read fails
                break;
            }
        }
        fclose(fp);
    }
*/