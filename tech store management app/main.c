#include <stdio.h>

void menu();
void menu_choice(int *choice);
void second_menu();

int user_menu_choice;
int *UMC = &user_menu_choice;


int main(){
    while (true)
    {
        menu();
        menu_choice(UMC);

        if (user_menu_choice < 1 || user_menu_choice > 1){
            printf("invalid value!\nenter a number between [1] and [5]\n");
        }else if (user_menu_choice == 5) {
            printf("Good bye!\n");
        }else{
            switch (user_menu_choice)
            {
            case 1:
                second_menu();
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

void second_menu(){
    printf("[1] Add new product\n");
    printf("[2] Set the price and quantity\n");
    printf("[3] Delete a product\n");
    printf("[4] Exit\n");
}