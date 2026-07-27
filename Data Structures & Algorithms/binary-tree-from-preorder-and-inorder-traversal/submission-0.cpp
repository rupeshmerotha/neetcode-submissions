class Solution {
public:

    TreeNode* solve(vector<int>&pre,vector<int>&in,unordered_map<int,int>&m,int&idx,int lo,int hi){
        if(lo>hi) return NULL;
        TreeNode* root=new TreeNode(pre[idx++]);
        int pos = m[root->val];
        root->left = solve(pre, in, m, idx, lo, pos - 1);
        root->right = solve(pre, in, m, idx, pos + 1, hi);
        return root;
    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in){
        unordered_map<int,int>m;
        int n=in.size();
        for(int i=0;i<n;i++)  m[in[i]] = i;
        int idx = 0;
        return solve(pre,in,m,idx,0,n-1);
    }
};
