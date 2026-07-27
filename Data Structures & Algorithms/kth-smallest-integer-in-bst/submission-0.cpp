class Solution {
public:

    TreeNode* findip(TreeNode* root, TreeNode* curr){
    while(root->right != NULL && root->right != curr){
        root = root->right;
    }
    return root;
}

    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr=root;
        int count=0;
        while(curr!=NULL){
            if(curr->left==NULL){
                count++;
                if(count==k) return curr->val;
                curr=curr->right;
            }
            else{
                TreeNode*ip=findip(curr->left,curr);
                if(ip->right==NULL){
                    ip->right=curr;
                    curr=curr->left;
                }
                else{
                    ip->right=NULL;
                    count++;
                    if(count==k) return curr->val;
                    curr=curr->right;
                }
            }
        }
        return 0;
    }
};
