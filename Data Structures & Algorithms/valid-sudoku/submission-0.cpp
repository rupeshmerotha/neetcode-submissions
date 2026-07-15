class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                string row="R"+to_string(i)+board[i][j];
                string col="C"+to_string(j)+board[i][j];
                int box=(i/3)*3+(j/3);
                string boxKey="B"+to_string(box)+board[i][j];
                if(st.count(row) || st.count(col) || st.count(boxKey)) return false;
                st.insert(row);
                st.insert(col);
                st.insert(boxKey);
            }
        }
        return true;

    }
};
