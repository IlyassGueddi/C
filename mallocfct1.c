#include <stdio.h>
#include <stdlib.h>

void fill_array(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        *(arr + i) = i * 803;
    }
}

int main()
{
    int number = 20;
    int *arr = malloc( number * sizeof *arr);

    if ( arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    fill_array(arr, number);

    free(arr);
    return 0;
}