#include <stdio.h>


void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int tmp;
    while(j<numsSize){
        if(nums[j]){
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            j++;
            i++;
        }else if(0 == nums[j]){
            j++;
        }
    }
}

int main(){
    int i=0;
    int n[10] = {13,0,0,15,5,6,0,2,1,0};
    moveZeroes(n,10);
    for(i=0; i<10; i++){
        printf("%d ", n[i]);
    }
    printf("\n");

    return 0;
}


