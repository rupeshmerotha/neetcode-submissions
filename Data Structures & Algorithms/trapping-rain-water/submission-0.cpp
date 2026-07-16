class Solution {
public:
    int trap(vector<int>& nums){
        int n=nums.size();
        int l=0,r=n-1,lmax=0,rmax=0;
        int water=0;
        while(l<r){
            lmax=max(lmax,nums[l]);
            rmax=max(rmax,nums[r]);
            if(lmax<rmax){
                water+=lmax-nums[l];
                l++;
            }
            else{
                water+=rmax-nums[r];
                r--;
            }
            
        }
        return water;
    }
};
