class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum =0;
        int s = INT_MAX; 

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<s){
                s = nums[i];
            }
        }

        for(int i=0; i<nums.size(); i++){
            sum += nums[i]-s;
        }
        return sum;
    }
};