#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    if(NULL == node)
        return;
    node->val = node->next->val;
    node->next = node->next->next;
}

int main(){

    return 0;
}
