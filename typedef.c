#include <stdio.h>
#include <stdbool.h>

int main(){
    // we use to rename a data type, we use it most of times with struct

    // here i rename int to ra9m when i will define integer in the future i will write ra9minstead of int
    typedef int ra9m;

    ra9m age = 18;
    int year = 2025;

    printf("your age in %d is %d year old", year, age);

    return 0;
}