#include <stdio.h>
#include <stdbool.h>


void menu();
void menu_choice(int *choice);
void first_menu();
void first_choice(int *choice);
void second_menu();
void second_choice(int *choice);
void third_menu();
void third_choice(int *choice);
void fourth_menu();
void fourth_choice(int *choice);

int user_menu_choice;
int *UMC = &user_menu_choice;

int user_first_choice;
int *U1C = &user_first_choice;

int user_second_choice;
int *U2C = &user_second_choice;

int user_third_choice;
int *U3C = &user_third_choice;

int user_fourth_choice;
int *U4C = &user_fourth_choice;


int main(){
    while (true)
    {
        menu();
        menu_choice(UMC);

        if (user_menu_choice < 1 || user_menu_choice > 5){
            printf("invalid value!\nenter a number between [1] and [5]\n");
        }
        else if (user_menu_choice == 5) {
            printf("Good bye!\n");
            break;
        }
        else{
            switch (user_menu_choice)
            {
            case 1:
                first_menu();
                first_choice(U1C);

                if (user_first_choice < 1 || user_first_choice > 4){
                    printf("invalid value!\nenter a number between [1] and [4]\n");
                }
                else if (user_first_choice == 4) {
                    printf("Good bye!\n");
                    break;
                }
                else{
                    switch (user_first_choice)
                    {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;
                    
                    default:
                        break;
                    }
                }

                break;

            case 2:
                second_menu();
                second_choice(U2C);

                if (user_second_choice < 1 || user_second_choice > 4){
                    printf("invalid value!\nenter a number between [1] and [4]\n");
                }
                else if (user_second_choice == 4) {
                    printf("Good bye!\n");
                    break;
                }
                else{
                    switch (user_second_choice)
                    {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;
                    
                    default:
                        break;
                    }
                }
                break;

            case 3:
                third_menu();
                third_choice(U3C);

                if (user_third_choice < 1 || user_third_choice > 6){
                    printf("invalid value!\nenter a number between [1] and [6]\n");
                }
                else if (user_third_choice == 6) {
                    printf("Good bye!\n");
                    break;
                }
                else{
                    switch (user_third_choice)
                    {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    case 4:
                        /* code */
                        break;

                    case 5:
                        /* code */
                        break;
                    
                    default:
                        break;
                    }
                }
                break;

            case 4:
                fourth_menu();
                fourth_choice(U4C);

                if (user_fourth_choice < 1 || user_fourth_choice > 6){
                    printf("invalid value!\nenter a number between [1] and [6]\n");
                }
                else if (user_fourth_choice == 6) {
                    printf("Good bye!\n");
                    break;
                }
                else{
                    switch (user_fourth_choice)
                    {
                    case 1:
                        /* code */
                        break;

                    case 2:
                        /* code */
                        break;

                    case 3:
                        /* code */
                        break;

                    case 4:
                        /* code */
                        break;

                    case 5:
                        /* code */
                        break;
                    
                    default:
                        break;
                    }
                }
                break;
                
            default:
                break;
            }
        }
    }
    

    return 0;
}


void menu(){
    printf("[1] Products management\n");
    printf("[2] Clients management\n");
    printf("[3] Orders and bills\n");
    printf("[4] Research and presentation\n");
    printf("[5] Exit\n");
}
void menu_choice(int *choice){
    printf("\nChoose a number: ");
    scanf("%d", choice);
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

void second_menu(){
    printf("[1] Add client\n");
    printf("[2] Modify infos\n");
    printf("[3] Delete client\n");
    printf("[4] Exit\n");
}
void second_choice(int *choice){
    printf("\nChoose a number: ");
    scanf("%d", choice);
}

void third_menu(){
    printf("[1] Create new order\n");
    printf("[2] Calcule the totale price\n");
    printf("[3] Update the inventory upon sale\n");
    printf("[4] Show all the orders\n");
    printf("[5] Show a specify order\n");
    printf("[6] Exit\n");
}
void third_choice(int *choice){
    printf("\nChoose a number: ");
    scanf("%d", choice);
}

void fourth_menu(){
    printf("[1] Search for product using name\n");
    printf("[2] Search product using category\n");
    printf("[3] Show all products\n");
    printf("[4] Sort by price\n");
    printf("[5] Sort by stock\n");
    printf("[6] Exit\n");
}
void fourth_choice(int *choice){
    printf("\nChoose a number: ");
    scanf("%d", choice);
}