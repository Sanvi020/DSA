class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int m = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>m){
                m= nums[i];
            }
        }

        for(int i=0; i<nums.size(); i++){
            sum += m-nums[i];
        }

        return sum;
    }
};