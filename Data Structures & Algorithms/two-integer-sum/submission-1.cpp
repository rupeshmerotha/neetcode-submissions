class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])==m.end()){
                m[nums[i]]=i;
            } 
            else {
                return {m[target-nums[i]],i};
            } 
        }
        return {-1,-1};
    }
};
