#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student{
    char name[50];
    int age;
    float grade;
    char club[50];
}student;

student students [5];

void menu (){
    printf("------ MENU ------\n\n");
    printf("1- show  all the students\n");
    printf("2- students who have grades above 10\n");
    printf("3- modify a student grade by name \n");
    printf("4- search for student by her name and show all the infos about it\n");
    printf("5- exit\n\n");
    printf("What's your choice: ");
}

void printAllTheStudents(){
    printf("----name----age--grade--club-----\n\n");
    for (int i = 0; i < 5; i++) {
        printf("   %s   %d    %.2f   %s  \n", students[i].name, students[i].age, students[i].grade, students[i].club);
    }
}

void printtopstudents(){
    printf("----name----age--grade--club-----\n\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].grade >= 10){
            printf("   %s   %d    %.2f   %s  \n", students[i].name, students[i].age, students[i].grade, students[i].club);
        }else{
            continue;
        }
        
    }
}

void findastudentbyname(char name[50]){
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i].name, name) == 0){
            printf("----name----age--grade--club-----\n\n");
            printf("   %s   %d    %.2f   %s  \n", 
                   students[i].name, 
                   students[i].age, 
                   students[i].grade, 
                   students[i].club);
            
            float newgrade = 0;
            printf("Enter the new grade: ");
            scanf("%f", &newgrade);
            students[i].grade = newgrade;

            found = true;
            break; // نخرج من الحلقة بعد ما نلقا الطالب
        }
    }
    if (!found) {
        printf("Student not found!\n");
    }
}

int main(){
 
    strcpy(students[0].name, "ilyass");
    strcpy(students[1].name, "mohammed");
    strcpy(students[2].name, "ahmed");
    strcpy(students[3].name, "manal");
    strcpy(students[4].name, "ibra");

    strcpy(students[0].club, "IT");
    strcpy(students[1].club, "sport");
    strcpy(students[2].club, "robotic");
    strcpy(students[3].club, "biseness");
    strcpy(students[4].club, "it");

    students[0].age = 17;
    students[1].age =18;
    students[2].age =19;
    students[3].age =18;
    students[4].age =18;

    students[0].grade = 19.5;
    students[1].grade = 15.5;
    students[2].grade = 10;
    students[3].grade = 20;
    students[4].grade = 9;

    menu();
    int choice = 0;
    scanf("%d", &choice);
    while(getchar() != '\n');

    switch (choice)
    {
    case 1:
        printAllTheStudents();
        break;
    
    case 2:
        printtopstudents();
        break;

    case 3:
        char studentname[50] = " ";
        printf("Give me the name of the student: ");
        scanf(" %s", studentname);
        studentname[strcspn(studentname, "\n")] = '\0';

        findastudentbyname(studentname);
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

    return 0;
}