class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r = matrix.size();
        int c = matrix[0].size();

        for(int i=0; i<r;i++){
            int sum = 0;
            for(int j=0; j<c; j++){
                sum += matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};