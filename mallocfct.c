#include <stdio.h>
#include <stdlib.h>
/*the (*) before the name of the function actually mean that the functionwill return 
an integer pointer value.*/
int *create_array(int n){
    int *arr =  malloc( n * sizeof * arr);
    if ( arr == NULL ){
        return NULL;
    }
    for (int i = 0 ; i < n ; i++){
        *(arr + i)= 12 + i * 2;
    }
    return arr;
}

int main(){
    int number = 2;
    int *array_p = create_array(number);

    for (int i = 0 ; i < number ; i++){
        int x = *(array_p + i);
        printf("%d\n", x);
    }
    free(array_p);
    return 0;
}


/*lifetime and scope are separate so the memory allocated doesn't have a relation
with the bloc we allocate it on.*/