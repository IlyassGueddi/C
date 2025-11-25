#include <stdio.h>

int a,b,c;
int max = 0;

int main(){
    printf("donne moi la valeur de A: ");
    scanf("%d", &a);
    printf("donne moi la valeur de B: ");
    scanf("%d", &b);
    printf("donne moi la valeur de C: ");
    scanf("%d", &c);

    if ( a >= max){
        max = a;
        if (max <= b){
            max = b;
            if (max <= c){
                max = c;
            }else{
                
            }
        }else{
            
        }

    }else {
        
    }


    printf("%d", max);

    return 0;
}