#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *all = malloc(6 * sizeof *all);
    if (all == NULL){
        printf("memory allocation failles!");
        return 1;
    }
    free(all);

    *all = 28;
//we use here the memory even we freed it so we can't expect what will happen 
    printf("%d\n", *all);

// to prevent the bug, we set the pointer to NULL after free directly
    all = NULL;

    return 0;
}