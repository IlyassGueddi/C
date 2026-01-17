#include <stdio.h>

void swap(int *a, int *b, int y){
y = *a;
*a = *b;
*b = y;
}

int main(){
    int a = 10;
    int b = 20;
    int *x = &a;
    int *y = &b;
    int z;

    swap(x,y,z);

    printf("%d\t",a);
    printf("%p\n",&a);
    printf("%d\t",b);
    printf("%p\n",&b);

    return 0;
}

/* #########    this is the repport     ##########

how this actuallly work is that we have  a variabe a in the memory case with theadress 0x7fffffffd54c
and also we have a variable b in the memory case with the adress 0x7fffffffd550
so what the fonction swap do she is taken the value of the memory case 0x7fffffffd54c to 0x7fffffffd550
and the value of the memory case 0x7fffffffd550 to 0x7fffffffd54c

i make the swap work with pointers not normale variables because actually function uses local
variables not global so when we modu=ify a variable inside a function it just modifys a copy of it not 
the real variableso we use pointers to force the function to go to the exact cases 0x7fffffffd54c  and 0x7fffffffd550

for the difference between the & and * it's easy   first th & mean the adress of the variable
and the * mean the pointer  we want to store something one (usually we store & in it )

*/