class Solution {
public:
    bool search(int i ,int  j,string s,vector<vector<char>>&board,int len,int idx){
        if(i>=0 && j>=0 && i<board.size() && j<board[0].size() && s[idx] ==board[i][j]){
            char temp =board[i][j];
            board[i][j] ='0';
            idx+=1;
            if(idx ==len){
                return true;
            }else
            {
               if(search(i+1,j,s,board,len,idx))return true;
               if(search(i-1,j,s,board,len,idx))return true;
               if(search(i,j+1,s,board,len,idx))return true;
               if(search(i,j-1,s,board,len,idx))return true;
            }  
            board[i][j] =temp;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r =board.size();
        int c= board[0].size();
        int len =word.length();
        for(int  i=0;i<r;i++){
            for(int  j=0;j<c;j++){
                if(board[i][j] ==word[0] && search(i,j,word,board,len,0) )return true;
            }
        }
        return false;
    }
};