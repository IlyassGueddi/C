#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("give me a number n : ");
    scanf("%d", &n);

    int *p = malloc(n * sizeof *p);
    for (int i = 0 ; i < n ; i++){
        *(p + i) = 2*i;
        printf("%d\n", *(p+i));
    }
    free(p);

    return 0;
}