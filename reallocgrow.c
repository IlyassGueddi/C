#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(sizeof *arr);
    if (arr == NULL){
        printf("the memory allocation failled!\n");
    }
    *arr = 2007;

    int *test = realloc(arr, 2 * sizeof *arr);
    if (test == NULL)
    {
        free(arr);
        return 1;
    }else {
        arr = test;
    }

    *(arr + 1) = 2026;

    int *test1 = realloc(arr, 3 * sizeof *arr);
    if (test1 == NULL)
    {
        free(arr);
        return 1;
    }else {
        arr = test1;
    }

    arr[2] = 18;

    for (int i = 0 ; i < 3 ; i++){
        int prt = *(arr + i);
        printf("%d\n", prt);
    }



    return 0;
}