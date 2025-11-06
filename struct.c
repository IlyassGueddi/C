#include <stdio.h>
#include <string.h>

typedef struct student{
int age ;
char name[100] ;
char club[100];
float height; 
} tilmid;

int main(){
    tilmid s1;
    strcpy(s1.name, "ilyass");
    strcpy(s1.club, "it");
    s1.height = 1,80;
    s1.age = 18;
    printf("%s", s1.name);

    typedef struct date {
        int day, month, year;
    } Date;

    typedef struct student {
        char name[100];
        Date birthdate;
    } Student;

    Student s;
    printf("%d", s.birthdate.day = 5);
    s.birthdate.month = 11;
    s.birthdate.year = 2005;
    return 0;
}