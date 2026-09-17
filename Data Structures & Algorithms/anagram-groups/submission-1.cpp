class Solution {
public:

    string freqString(string s){
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
        string temp="";
        char ch='a';
        for(int i=0;i<26;i++){
            temp+=ch+(freq[i]+'0');
        }
        return temp;
    }

    vector<vector<string>> groupAnagrams(vector<string>&nums) {
        int n=nums.size();
        vector<vector<string>>res;
        if(n==0) return res;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string s=freqString(nums[i]);
            m[s].push_back(nums[i]);
        }
        for(auto &p:m){
            res.push_back(p.second);
        }
        return res;
    }
};
