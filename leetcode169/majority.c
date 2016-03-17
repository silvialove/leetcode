#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*空间复杂度 n*/
int majorityElement(int* nums, int numsSize) {
    int* stack = malloc(sizeof(int) * numsSize);
    int top = -1;
    int i;
    for(i=0; i<numsSize; i++){
        if(top == -1){
            stack[++top] = nums[i];
        }
        else if(stack[top] == nums[i]){
            stack[++top] = nums[i];
        }
        else{
            top --;
        }
    }
    return stack[0];
}
int main(){
    int nums[] = {1,2,4,5,6,3,2,2,2,2};
    int result = majorityElement(nums,10);
    printf("%d\n",result);
    return 0;
}
