class Solution {
public:
    vector<int>v;
    string encode(vector<string>&nums) {
        int n=nums.size();
        string s="";
        for(int i=0;i<n;i++){
            s+=nums[i];
            v.push_back(nums[i].size());
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int j=0;
        for(int i=0;i<v.size();i++){
            int size=v[i];
            string temp="";
            
            while(size--){
                temp+=s[j++];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
