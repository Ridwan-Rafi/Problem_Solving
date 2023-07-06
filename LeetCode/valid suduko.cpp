class Solution
{
public:
    bool list[11];
    void clr()
    {
        for(int i=0; i<11; i++)list[i]=0;
    }
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int val;
        for(int i=0; i<9; i++)
        {
            clr();
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        for(int i=0; i<9; i++)
        {
            clr();
            for(int j=0; j<9; j++)
            {
                if(board[j][i]==',')continue;
                val=board[j][i]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }
        clr();
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=0; i<3; i++)
        {
            for(int j=3; j<6; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=0; i<3; i++)
        {
            for(int j=6; j<9; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=3; i<6; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=3; i<6; i++)
        {
            for(int j=3; j<6; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=3; i<6; i++)
        {
            for(int j=6; j<9; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=6; i<9; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=6; i<9; i++)
        {
            for(int j=3; j<6; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        clr();
        for(int i=6; i<9; i++)
        {
            for(int j=6; j<9; j++)
            {
                if(board[i][j]=='.')continue;
                val=board[i][j]-'0';
                if(list[val]==0)list[val]=1;
                else return false;
            }
        }

        return true;
    }
};
