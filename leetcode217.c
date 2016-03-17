#include <stdio.h>
#include <stdbool.h>

void qSort(int* a, int start, int end);

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    qSort(nums,0,numsSize-1);
    for(i=0; i<numsSize-1; i++){
        if(nums[i] == nums[i+1])
            return false;
    }
    return true;
}
void qSort(int* a, int start, int end){
    int i = start;
    int j = end;
    int base = a[start];
    if(start > end)
        return;
    while(i!=j){

        while((a[j]>=base)&&(j>i))
            j--;
        if(j>i)
            a[i] = a[j];
        while((a[i]<=base)&&(i<j))
            i++;
        if(i<j)
            a[j] = a[i];
    }
    a[i] = base;
    qSort(a, start, i-1);
    qSort(a, i+1, end);
}

int main(){

    int n[10] = {1,0,111,12,0,66,3,21,34,5};
    printf("%d\n",containsDuplicate(n,10));
    return 0;
}
