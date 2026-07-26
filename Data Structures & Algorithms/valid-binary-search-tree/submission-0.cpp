class Solution {
public:

    bool solve(TreeNode*root,int minR,int maxR){
        if(root==NULL) return true;
        if(root->val <= minR || root->val >= maxR) return false;
        return solve(root->left,minR,root->val) && solve(root->right,root->val,maxR);
    }

    bool isValidBST(TreeNode* root) {
        int minR=INT_MIN;
        int maxR=INT_MAX;
        return solve(root,minR,maxR);
    }
};
