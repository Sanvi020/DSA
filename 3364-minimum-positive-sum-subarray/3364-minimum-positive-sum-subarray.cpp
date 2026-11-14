class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans =-1;
        for(int i=0;i<nums.size(); i++){
            int sum = 0;
            for(int j=i;j<nums.size(); j++){
                sum += nums[j];
                int len = j-i+1;
                if(len>=l && len<=r && sum>0){
                    if(ans==-1||sum<ans){
                        ans = sum;
                    }
                }
            }
        }
        return ans;
    }
};