#include <stdio.h>
#include <unistd.h>

int main(){
    for(int i=1; i<=5; i+=1){
        printf("%d", i);
    }
    sleep(5);
    printf("5s");
    return 0;
}