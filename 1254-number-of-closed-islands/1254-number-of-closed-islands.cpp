class Solution {
public:

    bool search(vector<vector<int>> &grid , int r ,int c){
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size()){
            return false;
        }

        if(grid[r][c]==1){
            return true;
        }

        grid[r][c]=1;

        bool up = search(grid,r-1,c);
        bool down = search(grid,r+1,c);
        bool right = search(grid,r,c+1);
        bool left =  search(grid,r,c-1);

        return up && down && right && left;
    }
    int closedIsland(vector<vector<int>>& grid) {

        int count =0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==0){
                    if(search(grid,i,j)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};