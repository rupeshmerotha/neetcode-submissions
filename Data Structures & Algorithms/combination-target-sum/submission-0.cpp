class Solution {
public:

    void solve(vector<int>&nums,vector<vector<int>>&res,vector<int>&temp,int target,int idx){
        if(idx==nums.size()){
            if(target==0) res.push_back(temp);
            return;
        }
        if(target<0) return;
        temp.push_back(nums[idx]);
        solve(nums,res,temp,target-nums[idx],idx);
        temp.pop_back();
        solve(nums,res,temp,target,idx+1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        int idx=0;
        solve(nums,res,temp,target,idx);
        return res;
    }
};
