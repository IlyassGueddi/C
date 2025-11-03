#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // نحدد البذرة العشوائية (مرة واحدة)

    int randomNumber = rand() % 2 + 1;  // رقم عشوائي من 1 إلى 10
    printf("Random number: %d\n", randomNumber);

    return 0;
}