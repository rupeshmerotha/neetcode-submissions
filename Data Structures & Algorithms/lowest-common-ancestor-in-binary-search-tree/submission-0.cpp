class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p || root==q) return root;
        TreeNode* lst=lowestCommonAncestor(root->left,p,q);
        TreeNode* rst=lowestCommonAncestor(root->right,p,q);
        if(lst!=NULL && rst!=NULL) return root;
        if(lst==NULL && rst!=NULL) return rst;
        return lst;
    }
};
