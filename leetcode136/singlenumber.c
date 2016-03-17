#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int singleNumber(int* nums, int numsSize) {
    int k = nums[0];
    int i;
    for(i=1; i<numsSize; i++){
        k = (k ^ nums[i]);
    }
    return k;
}

int main(){
    int arr[7] = {5,8,5,6,8,7,7};
    int res = singleNumber(arr,7);
    printf("%d\n",res);
    return 0;
}
