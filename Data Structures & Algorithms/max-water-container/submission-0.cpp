class Solution {
public:
    int maxArea(vector<int>& nums){
        int n=nums.size();
        int maxarea=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxarea=max(maxarea,(j-i)*min(nums[j],nums[i]));
            }
        }
        return maxarea;
    }
};
