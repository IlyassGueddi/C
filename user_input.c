#include <stdio.h>
int main(){
     
    char name[20] = "";
    int age = 0; 
    
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();
    
    printf("your name is %s and your age is %d year old\n", name, age);
    

    return 0;
}