#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int val;
    struct ListNode* next;
};
struct ListNode* reverseList(struct ListNode* head) {

    if(NULL == head || NULL == head->next->next){
        return head;
    }

    struct ListNode* pre = head;
    struct ListNode* cur = head->next;
    struct ListNode* tmp;
    pre->next = NULL;
    while(cur != NULL){
        tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

struct ListNode* creatList(int* nums, int numsSize){
    int i;
   struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = nums[0];
    head->next = NULL;
   struct ListNode* tmp = malloc(sizeof(struct ListNode));
    tmp = head;
    for(i=1; i<numsSize; i++){
        struct ListNode* node = malloc(sizeof(struct ListNode));
        tmp->next = node;
        node->val = nums[i];
        node->next = NULL;
        tmp = node;
    }
    return head;
}
int main(){
    int i;
    int n[5] = {2,4,1,6,11};
    struct ListNode* head = creatList(n, 5);
    head = reverseList(head);
    for(i=0; i<5; i++){
        if(i == 4){
            printf("%d\n",head->val);
            break;
        }
        printf("%d -> ", head->val);
        head = head->next;
    }
    return 0;
}
