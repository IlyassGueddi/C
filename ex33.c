#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int secret, user ;

int main(){

    srand(time(NUll));
    secret = rand() % 100 + 1;

    printf("%d", secret);

    return 0;
}