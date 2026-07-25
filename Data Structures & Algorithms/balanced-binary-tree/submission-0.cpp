class Solution {
public:

    int getHeight(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }


    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lefth=getHeight(root->left);
        int righth=getHeight(root->right);
        if(abs(lefth-righth)>=2) return false;
        else return isBalanced(root->left) && isBalanced(root->right);
    }
};