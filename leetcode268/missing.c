#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int missingNumber(int* nums, int numsSize) {
    int sum = numsSize*(numsSize + 1)/2;
    int i = 0;
    for(i=0; i<numsSize; i++){
        sum = sum - nums[i];
    }
    return sum;
}

int main(){

    int arr[4] = {0,1,3,4};
    int result = missingNumber(arr,4);
    printf("%d\n",result);
    return 0;
}
