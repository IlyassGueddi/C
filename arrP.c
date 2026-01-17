#include <stdio.h>

int main(){
    int arr[5] = {1,4,5,6,3};
    int *p = &arr[0];
     for (int i = 0; i < 5; i++){
        printf("%d\n", *(p+i));
    }
    
    *(p+2) = 999;
     printf("%d\n", arr[2]);

    return 0;
}

/*  
###### ponters based array in c #####

the goal of this task is to explain how dos pointers act with array and what is the relation between them 

first when we declar an array in c we need to fix the longth of it so what happens
actually is that we take the pointr of the first element then we take the next memory
cases next to it ( longth of array - 1). so we can say arrays in c are just one usuful way to 
use pointers.
so what we dowhen wee take the pointer of the first element of the array we can acces
all the array element by just adding the index of it to the first element pointer 

like for example :
    *(p+2) == arr[2];
*/