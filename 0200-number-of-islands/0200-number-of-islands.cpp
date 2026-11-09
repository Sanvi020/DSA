class Solution {
public:
     void search(vector<vector<char>> &grid, int r, int c){
        if(r<0|| r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c] == '0'){
            return ;
        } 
        grid[r][c] = '0';
        search(grid,r-1,c);
        search(grid,r+1,c);
        search(grid,r,c+1);
        search(grid,r,c-1);
     }

    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        for(int i=0; i<grid.size(); i++){
            for(int j =0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    count++;
                    search(grid,i,j);
                    }
                }
            }
        return count;
    }
};