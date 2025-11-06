#include <stdio.h>

int main(){
    typedef enum { Mon , tue, wed, thu, fri, sat, sun} week;
    week today = wed;
    switch (today)
    {
    case Mon || tue || thu || fri || sat || sun:
        printf("Not today");
        break;
    
    default:
        printf("today is wed");
        break;
    }

    char fruit_arr[5][100] = {"apple",
                            "banana",
                            "orange",
                            "kiwi",
                            "ananas"};
    typedef enum {apple, banana , orange, kiwi, ananas}fruits;
    
    int fruuit = 0;
    printf("give me the number of fruit you choose : ");
    scanf ("%d", &fruuit);

    switch (fruuit)
    {
    case apple:
        printf("apple");
        break;
    case banana:
        printf("banana");
        break;
    case orange:
        printf("orange");
        break;
    case kiwi:
        printf("kiwi");
        break;
    default:
        break;
    }

    

    return 0;
} 