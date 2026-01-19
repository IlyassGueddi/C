#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    while(true)
    {
        int *memory = malloc(99999999 * sizeof *memory);
        printf("%p\n", (void *)memory);

    }
    return 0;
}