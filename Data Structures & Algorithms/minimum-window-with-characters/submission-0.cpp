class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        unordered_map<char,int>m;
        for(char c:t) m[c]++;
        int i=0,j=0;
        string ans="";
        int count=t.size();
        int minwindow=INT_MAX;
        int start_i=0;
        while(j<s.size()){
            char ch=s[j];
            if(m[ch]>0) count--;
            m[ch]--;
            while(count==0){
                int currwindow=j-i+1;
                if(minwindow>currwindow){
                    minwindow=currwindow;
                    start_i=i;
                }
                m[s[i]]++;
                if(m[s[i]]>0) count++;
                i++;
            }
            j++;
        }
        if(minwindow==INT_MAX) return "";
        return s.substr(start_i,minwindow);
    }
};
