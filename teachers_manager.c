#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void choose_main();

void choose_class(char class_name[100]);

void choose_branche();

int main(){
    while(true){

        choose_main();

        int choice = 0; 
        printf("what's your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            choose_branche();

            int class_choice = 0;
            printf("what's  your choice: ");
            scanf("%d", &class_choice);

            switch (class_choice)
            {
            case 1:
                choose_class("Computer science");
                break;

            case 2:
                choose_class("physics");
                break;

            case 3:
                choose_class("chemistry");
                break;

            case 4:
                choose_class("maths");
                break;

            case 5:
                choose_class("biology");
                break;

            case 6:
                printf("GoodBye");
                break;
            
            default:
                printf("Invalid value !");
                break;
            }
            
            break;

        case 2:
            
            break;

        case 3:
            printf("GoodBye");
            break;
        
        default:
            printf("Invalid value !");
            break;
        }
    }

    return 0;
}

void choose_main(){
    printf("------ Student Grade Manager ------\n\n");
    printf("1- Classes\n");
    printf("2- services\n");
    printf("3- exit\n\n");
}

void choose_class(char class_name[100]){
    printf("------ %s ------\n\n", class_name);
    printf("1- Student\n");
    printf("2- Top students\n");
    printf("3- Grades Manager\n");
    printf("4- Progress\n");
    printf("5- Calendar\n");
    printf("6- Exit\n\n");
}

void choose_branche(){
    printf("------ Classes ------\n\n");
    printf("1- Computer science\n");
    printf("2- physics\n");
    printf("3- chemistry\n");
    printf("4- maths\n");
    printf("5- biology\n");
    printf("6- exit\n\n");
}