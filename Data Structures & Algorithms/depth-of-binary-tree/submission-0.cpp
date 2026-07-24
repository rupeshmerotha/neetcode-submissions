class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int leftd=1+maxDepth(root->left);
        int rightd=1+maxDepth(root->right);
        return max(leftd,rightd);
    }
};
