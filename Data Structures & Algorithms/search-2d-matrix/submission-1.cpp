class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int r=nums.size();
        int c=nums[0].size();
        int lo=0;
        int hi=(r*c)-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int ni=mid/c;
            int nj=mid%c;
            if(nums[ni][nj]==target) return true;
            else if(nums[ni][nj]>target) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};
