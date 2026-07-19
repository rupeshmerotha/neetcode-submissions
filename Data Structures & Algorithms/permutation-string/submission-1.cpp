class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int n=s1.size();
        int i=0,j=n-1;
        unordered_map<char,int>m;
        unordered_map<char,int>temp;
        for(int x=0;x<n;x++) m[s1[x]]++;
        for(int x=0;x<n;x++) temp[s2[x]]++;
        while(j<s2.size()){
            if(m==temp) return true;
            temp[s2[i]]--;
            if(temp[s2[i]]==0) temp.erase(s2[i]);
            i++;
            j++;
            temp[s2[j]]++;

        }
        return false;
    }
};
