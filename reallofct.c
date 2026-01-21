#include <stdio.h>
#include <stdlib.h>

/* 
   Function to safely resize a dynamic array.
   - arr: pointer to pointer to the array
   - new_size: number of elements we want
   Returns:
   - 0 on success
   - 1 on failure
*/
int reallofct(int **arr, int new_size)
{
    int *tmp = realloc(*arr, new_size * sizeof **arr);
    if (tmp == NULL)
    {
        // realloc failed, original memory still valid
        return 1;
    }

    *arr = tmp; // update caller's pointer
    return 0;
}

int main()
{
    int *arr = malloc(2 * sizeof *arr);
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // initialize first two elements
    arr[0] = 10;
    arr[1] = 20;

    // resize to 5 elements
    if (reallofct(&arr, 5) != 0)
    {
        printf("Realloc failed\n");
        free(arr);
        return 1;
    }

    // add new values
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // resize to 8 elements
    if (reallofct(&arr, 8) != 0)
    {
        printf("Realloc failed\n");
        free(arr);
        return 1;
    }

    // add more values
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;

    // print all values
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
