class Solution {
public:

    void solve(vector<int>&nums,vector<vector<int>>&res,vector<int>&temp,int target,int idx){
        if(idx==nums.size()){
            if(target==0) res.push_back(temp);
            return;
        }
        if(target<0) return;
        temp.push_back(nums[idx]);
        solve(nums,res,temp,target-nums[idx],idx+1);
        temp.pop_back();
        while(idx+1<nums.size() && nums[idx]==nums[idx+1]) idx++;
        solve(nums,res,temp,target,idx+1);
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        int idx=0;
        solve(nums,res,temp,target,idx);
        return res;
    }
};
