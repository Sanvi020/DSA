class Solution {
public:
    int countBattleships(vector<vector<char>>& grid) {
        int count = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='X'){
                    if((i==0 || grid[i-1][j]!='X') && (j==0 || grid[i][j-1]!='X')){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};