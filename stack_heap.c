#include <stdio.h>
#include <stdlib.h>

int main(){
    int *y = malloc(sizeof(int));  //in heap
    *y = 10;
    void function(){
        int x = 20;  //in stack
        int y = 30;  //in stack
    }
    
    printf("%d\n", *y);
    free(y);
    return 0;
}