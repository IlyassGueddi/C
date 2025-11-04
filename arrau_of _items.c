#include <stdio.h>

int main(){
    char names[3][20]; 

    for (int i = 0; i < 3; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }
    printf("\nThe names you entered are:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}