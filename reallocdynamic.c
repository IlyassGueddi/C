#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int capacity = 2;
    int size = 0;
    int *arr = malloc(capacity * sizeof *arr);
    if ( arr == NULL){
        printf("the memory allocation failled");
        return 1;
    }
    while(true)
    {
        int number;
        printf("Give me a number (-1 to stop): ");
        scanf("%d", &number);
        if (number == -1)
        {
            printf("Good bye!\n");
            break;
        }
        else
        {
            int cap = capacity - 1;
            if (size == cap){
                capacity *= 2;
                int *test =  realloc(arr, capacity * sizeof *arr);
                if (test == NULL){
                    free(arr);
                    return 1;
                }else{
                    arr = test;
                }
            }
            *(arr + size) = number;
            size += 1;
        }
    }

    for (int i = 0 ; i < size ; i++){
        int pr = *(arr + i);
        printf("%d\n", pr) ;
    }

    return 0;
}