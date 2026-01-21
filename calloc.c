// calloc is exactly the same as malloc but the only difference is that it makes 
// all the values NUll in the beginning

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0 ;
    printf("give me a number n(int) > 3: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof *arr);
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3 ; i++)
    {
        int number = 0;
        printf("give me the number %d: ", i+1);
        scanf("%d", &number);

        *(arr + i + 1) = number;
    }
    int somme = 0;
    for (int i = 0; i < n ; i++)
    {
        somme += *(arr + i);
        printf("number %d: %d\n", i+1, *(arr + i));
    }

    float average = (float)somme / n;

    printf("the somme of the numbers is %d\n", somme);
    printf("the average of the numbers is %.2f\n", average);

    free(arr);
    arr = 0;

    return 0;
}