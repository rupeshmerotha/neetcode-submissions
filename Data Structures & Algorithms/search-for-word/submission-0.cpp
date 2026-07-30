class Solution {
public:

    bool solve(vector<vector<char>>& board, string word,int i,int j,int&r,int&c,int idx){
        if(idx==word.size()) return true;
        if(i<0 || j<0 || i>=r || j>=c || board[i][j]!=word[idx] || board[i][j]=='#') return false;
        char ch=board[i][j];
        board[i][j]='#';
        bool found=solve(board,word,i+1,j,r,c,idx+1) ||
                    solve(board,word,i,j+1,r,c,idx+1) ||
                    solve(board,word,i-1,j,r,c,idx+1) ||
                    solve(board,word,i,j-1,r,c,idx+1);
        board[i][j]=ch;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==word[0] && solve(board,word,i,j,r,c,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
