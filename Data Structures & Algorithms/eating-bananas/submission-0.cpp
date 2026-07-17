class Solution {
public:

    bool isValid(int h,vector<int>&nums,int maxh){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/h);
        }
        return sum<=maxh;
    }

    int minEatingSpeed(vector<int>& nums, int h) {
        int lo=1;
        int hi=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(isValid(mid,nums,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};
