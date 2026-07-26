class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int small=min(p->val,q->val);
        int big=max(p->val,q->val);
        if(root->val>=small && root->val<=big) return root;
        else if(root->val>small && root->val>big) return lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);
    }
};
