class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0,j=0;
        int n=s.size();
        int len=0;

        while(j<n){
            if(!st.count(s[j])){
                st.insert(s[j]);
                len=max(len,j-i+1);
                j++;
            }
            else{
                while(st.count(s[j])){
                    st.erase(s[i]);
                    i++;
                }
            }
        }
        return len;
    }
};
