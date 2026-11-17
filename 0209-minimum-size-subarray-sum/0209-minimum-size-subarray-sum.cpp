class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int i = 0;
        int sum = 0;

        for(int j=i; j<nums.size(); j++){
            sum += nums[j];

            while(sum >=target){
                int len = j-i+1;
                ans = min(len,ans);

                sum -= nums[i];
                i++;
            }
        }
        if(ans == INT_MAX){
            ans = 0;
        }
        return ans;
    }
};