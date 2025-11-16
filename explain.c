#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void menu();

void addtask(char task[300], FILE* file, int *ID, char cont);

int ID = 0;

int main(){

    while (true){
        int choice;
        menu();
        printf("what's your answer: ");
        scanf("%d", &choice);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        if (choice == 5){
            printf("\nGOOD BYE!\n\n");
            break;
        }else{
            switch (choice)
            {
            case 1:
                // open the tasks file
                FILE *tasksfile = fopen("/home/mial/Desktop/task.txt", "a");

                // check if there is some error in the file openning 
                if (tasksfile == NULL){
                    printf("---- Error ----\n we couldn't open the file!\n");
                    return 1;
                }

                char task[300]; 
                char cont;

                addtask(task, tasksfile, &ID, cont);

                fclose(tasksfile);

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

            default:
                printf("invalid value! \n\n");
                break;
            }
        }

        
    }

    return 0;
}

void menu(){
    printf("-------- MENU --------\n\n");
    printf("1- add tasks\n");
    printf("2- delete tasks\n");
    printf("3- show tasks\n");
    printf("4- mark as done \n");
    printf("5- exit\n\n");
}

void addtask(char task[300], FILE* file, int *ID, char cont){

    printf("\ngive me today's task: ");
    fgets(task, 300, stdin);

    fprintf(file, "task %d :: %s", *ID, task);
    (*ID)++; 
}