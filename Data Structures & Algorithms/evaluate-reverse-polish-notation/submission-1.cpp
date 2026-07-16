class Solution {
public:

    bool isNotOp(string s){
        if(s=="+" || s=="-" || s=="*" || s=="/") return false;
        return true;
    }
    int evalRPN(vector<string>&nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(isNotOp(nums[i])) st.push(stoi(nums[i]));
            else{
                int n1=st.top(); st.pop();
                int n2=st.top(); st.pop();
                if(nums[i]=="+") st.push(n1+n2);
                else if(nums[i]=="-") st.push(n2-n1);
                else if(nums[i]=="*") st.push(n1*n2);
                else st.push(n2/n1);
            }
        }
        return st.top();
    }
};