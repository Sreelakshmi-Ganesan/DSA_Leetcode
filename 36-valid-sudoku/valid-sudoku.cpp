class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>box[9];

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char curr=board[i][j];

                if(curr=='.') continue;
                int boxi=(i/3)*3+(j/3);

                if(row[i].count(curr)|| col[j].count(curr)|| box[boxi].count(curr))
                return false;

                row[i].insert(curr);
                col[j].insert(curr);
                box[boxi].insert(curr);
            }
           
        }

         return true;

    }
};