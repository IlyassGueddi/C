#include <stdio.h>
#include <string.h>

typedef struct students{
    char name [50];
    int age ;
    float grade ;
} student;

void fillstudent(student *s){
    char name1 [50];
    printf("ENTER THE NAME OF THE STUDENT: ");
    fgets(name1 , 50 , stdin);
    strcpy(s->name, name1);

    int age1;
    printf("ENTER THE AGE OF THE STUDENT: ");
    scanf("%d", &age1);

    s->age = age1;

    float grade1;
    printf("ENTER THE GRADE OF THE STUDENT: ");
    scanf("%f", &grade1);
    s->grade = grade1;
    
}

void printstudent(student s){
    printf("\n\nthe name of the student is : %s", s.name);
    printf("his age is %d year old\n", s.age);
    printf("and finnally his grade is %.2f. \n", s.grade);
}

void updategrade(student *s){
    printf("\n\nEnter the new grade : ");
    scanf("%f", &s->grade);
}

int main(){

    student AI_S1;

    fillstudent(&AI_S1);

    printstudent(AI_S1); 
    
    updategrade(&AI_S1);

    printstudent(AI_S1);

    return 0;
}