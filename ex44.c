#include <stdio.h>

int main(){
    int mil = 0;
    int km ;
    printf("Miles  ::  Km\n");
    for (int i ; i < 31 ; i = i + 5){
        mil = i;
        km = mil * 1.609344 ;
        printf("%d  ::  %d\n", mil, km);
        
    }

    return 0;
}