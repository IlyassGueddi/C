/*dynamic memory is simply a memory with manually controlled lifetime*/
/* malloc == memory allocation */
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*allocat memory for 80 float number */
    float *p = malloc(80 * sizeof *p); 

    if (p == NULL){/* check if there is an erreur allocating memory*/
        printf("erreur, we can't allocate memory!!");
        return 1;
    }

    printf("%p\n", *p);
    /*free the memory not removing it not changing th epointer, not making it NULL
    but making the memory no longer yours (the titles may be reused)*/
    free(p);
    /*i will also print the same value of p but it's no longer usufall ( darling pointer)*/
    printf("%p\n", *p);
    /*making p NULL manually*/
    p = NULL;    


    /* ###### things must avoid ####### */
    /* MEMORY LEAK:  happens when we call malloc but forget to free the memory*/
    /* DOUBLE FREE: free the samememory twotimes (the heap or program may crash) */
    /* USE AFTER FREE: using a memory after freeing it (bugs)*/
    return 0;
}