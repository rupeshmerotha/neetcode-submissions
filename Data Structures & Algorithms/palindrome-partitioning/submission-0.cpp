class Solution {
public:


bool isPalindrome(string s){
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++; j--;
            }
            else return false;
        }
        return true;
    }

    void solve(vector<vector<string>>&res,vector<string>&temp,string s){

        if(s.size()==0){
            res.push_back(temp);
            return;
        }
        
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPalindrome(part)){
                temp.push_back(part);
                solve(res,temp,s.substr(i+1));
                temp.pop_back();
            } 
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        int idx=0;
        solve(res,temp,s);
        return res;
    }
};
