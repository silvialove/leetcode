#include <stdio.h>
/**
 * Definition for a binary tree node.**/
struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

int max(int a, int b){
    return a>b?a:b;
}
int min(int a, int b){
    return a<b?a:b;
}
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(NULL == root || NULL == p || NULL == q){
        return NULL;
    }
    if(max(p->val,q->val) < (root->val)){
        lowestCommonAncestor(root->left,p,q);
    }else if(min(p->val,q->val) > (root->val)){
        lowestCommonAncestor(root->right,p,q);
    }else{
        return root;
    }
}



