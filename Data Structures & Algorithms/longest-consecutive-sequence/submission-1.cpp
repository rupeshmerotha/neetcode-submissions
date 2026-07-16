class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen=0;
        int i=0;
        while(i<n){
            int len=1;
            int num=nums[i];
            while(s.count(num-1)){
                len++;
                num--;
            }
            maxlen=max(maxlen,len);
            s.insert(nums[i]);
            i++;
        }
        return maxlen;
    }
};
