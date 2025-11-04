#include <stdio.h>

int main(){
    int nums[6] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size ; i++){
        printf("%d \n", nums[i]);
    }

    int sum =0;
    for (int j = 0; j< size; j++){
        sum = sum + nums[j];
        
    }
    printf("%d", sum);

    return 0;
}