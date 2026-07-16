class Solution {
public:
    int maxArea(vector<int>& nums){
        int n=nums.size();
        int maxarea=0;
        int i=0,j=n-1;
        while(i<j){
            maxarea=max(maxarea,(j-i)*min(nums[j],nums[i]));
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return maxarea;
    }
};
