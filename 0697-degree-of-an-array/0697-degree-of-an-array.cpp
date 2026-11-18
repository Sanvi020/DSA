class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> m , first;
        int maxi = 0;
        int ans= INT_MAX;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;

            if(first.find(nums[i])==first.end()){
                first[nums[i]] = i;
            }
            if(m[nums[i]]>maxi){
                maxi = m[nums[i]];
                ans = i-first[nums[i]]+1;
            }
            else if(m[nums[i]]==maxi){
                ans = min(ans,i-first[nums[i]]+1);
            }
        }
        return ans;
    }
};