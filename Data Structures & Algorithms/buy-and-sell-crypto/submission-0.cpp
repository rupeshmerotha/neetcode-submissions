class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int minsof=INT_MAX;
        int profitsof=0;
        for(int i=0;i<n;i++){
            minsof=min(minsof,nums[i]);
            profitsof=max(profitsof,nums[i]-minsof);
        }
        return profitsof;
        
    }
};
