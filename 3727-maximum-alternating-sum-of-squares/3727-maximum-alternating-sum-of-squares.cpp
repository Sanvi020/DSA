class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
            arr[i] = abs(nums[i]*nums[i]);
        }
        sort(arr.begin(),arr.end());

        long long ans =0;
        int n = arr.size();
        for(int i=n/2; i<n; i++){
            ans += arr[i];
        }
        for(int i=0; i<n/2; i++){
            ans -= arr[i];
        }

        return ans;
    }
};