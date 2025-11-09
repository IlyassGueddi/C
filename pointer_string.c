#include <stdio.h>

int main(){
    char *name = "ilyass"; 
    printf("Enter the new name: ");
    scanf("%s", &name);
    printf("%s", &name);
    return 0;
}