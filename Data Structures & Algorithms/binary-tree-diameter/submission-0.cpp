class Solution {
public:

    int solve(TreeNode*root,int&res){
        if(root==NULL) return 0;
        int lefth=solve(root->left,res);
        int righth=solve(root->right,res);
        res=max(res,lefth+righth);
        return max(lefth,righth)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int res=0;
        solve(root,res);
        return res;
    }
};