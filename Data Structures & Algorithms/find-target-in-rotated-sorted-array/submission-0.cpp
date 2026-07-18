class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums[0]==target) return 0;
        if(nums[n-1]==target) return n-1;
        int lo=1;
        int hi=n-2;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<nums[hi]){
                if(target>nums[mid] && target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
            else{
                if(target<nums[mid] && target>=nums[lo]) hi=mid-1;
                else lo=mid+1;
            }
        }
        return -1;
    }
};
