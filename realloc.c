#include <stdio.h>
#include <stdlib.h>

/* we use realloc to resize the allocated memory (make it bigger ,smaller or null)
we use it just if we already allocate memory 
*/

int main()
{
    int *arr = malloc( 6 * sizeof *arr);
    if ( arr == NULL){
        printf("the memory allocation failles");
        return 1;
    }

    for (int i =0 ; i < 6 ; i++){
        *(arr + i) = 49 - 11 * i;
    }
    // here we make the allocated memory  from thhe array smaller (from 6 to 3 )
    int *tmp = realloc(arr, 3* sizeof *arr);
    if (tmp == NULL)
    {
        free(arr);
        return 0;
    }else{
        tmp = arr;
    }

    for (int i = 0 ; i < 3 ; i++)
    {
        int tosee = *(arr + i);
        printf("%d\n", tosee);
    }

    free(arr);
    /// realloc(ptr, 0) is implementation-defined, better use free(ptr)
    arr = NULL;
     return 0;
}