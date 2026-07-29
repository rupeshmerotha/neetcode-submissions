class Solution {
public:

    void solve(vector<vector<int>>&res,vector<int>&temp,int idx,vector<int>&nums){
        if(idx==nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(res,temp,idx+1,nums);
        temp.pop_back();
        solve(res,temp,idx+1,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        int idx=0;
        solve(res,temp,idx,nums);
        return res;
    }
};
