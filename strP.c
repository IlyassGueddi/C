#include <stdio.h>

int main(){
    char str[] = "ilyass";
    char *p = &str[0];

    for (int i = 0; i < sizeof(str); i++){
        printf("%c\n", *(p+i));
    }

    for (int i = 0; i < sizeof(str); i++){
        if (*(p+i) == 'a'){
            *(p+i) = 'A';
        }
        printf("%c", *(p+i));
    }

    return 0;  
}

/*i don't think this needs a report because the strings are just arrays so understanding arrays with pointers is the same like strings with pointers*/