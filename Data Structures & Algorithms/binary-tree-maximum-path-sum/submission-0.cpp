class Solution {
public:

    int res=INT_MIN;
    int solve(TreeNode*root){
        if(root==NULL) return 0;
        int lsum=solve(root->left);
        int rsum=solve(root->right);
        int p1=lsum+rsum+root->val;
        int p2=max(lsum,rsum)+root->val;
        int p3=root->val;
        res = max(res, max({p1, p2, p3}));
        return max(p2,p3);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return res;
    }
};
