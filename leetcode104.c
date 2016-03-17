#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode* root) {
    int l = 0;
    int r = 0;
    if (root == NULL){
        return 0;
    }

    l = maxDepth(root->left);
    r = maxDepth(root->right);

    return l>r?l+1:r+1;
}
