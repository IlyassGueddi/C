#include <stdio.h>

int main(){
    int var = 5;
    int *p = &var;
    int *dbl = &(*p);

    *dbl = *p;
    *dbl = 10;

    printf("%d", var);
    printf("%d", *p);
    printf("%d", *dbl);

    return 0;
}

/*
i will not try to write a report jsut small explanation about what happens here:

first lets make thing clear 
    the first pointer of the variable will store the adress of the variable it self
    in an other adress so when we declare a pointer to that pointer P  it will store the 
    adress whre the first pointer stores the adress of the variable 

    why when we print every one it gives us the same value of the variable ???
        it's easy let's just explain how does the last pointer are printed so like
        that we can understand how does any number of pointers who are declared like that
        are  printed .
        so what happens is we print the last pointer (interger)  but in our pointer we have an adress not an integer
        so it goes then to that adress (the adress of the first pointer) but lo there it founds and other adress
        (becase there is actually an other pointer) so we go also to the new adress and there we find thevarible value so we print it
        so like that if we do pointrs infinitly likethat it will always gives use he value of the variable

note:
    this is true we don't modify any pointer of the chain of pointers
*/