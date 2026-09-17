class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>set;
        for(int i=0;i<n;i++){
            if(set.find(nums[i])!=set.end()) return true;
            else set.insert(nums[i]);
        }
        return false;
    }
};