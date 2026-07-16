class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen=0;
        int i=0;
        while(i<n){
            int num=nums[i];
            int len=0;
            if(!s.count(num-1)){
                while(s.count(num)){
                    len++;
                    num++;
                }
            }
            i++;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
