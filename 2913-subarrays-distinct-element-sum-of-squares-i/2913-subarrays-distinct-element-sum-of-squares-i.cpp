class Solution {
public:
    int sumCounts(vector<int>& nums) {
        
        int ans = 0; 

        for(int i=0; i<nums.size(); i++){
            unordered_set<int> s;         // Every Time the set resets when new subarray 
            for(int j =i; j<nums.size(); j++){   //is getting formed.
                s.insert(nums[j]);
                int n = s.size();         // This loops is helping in creation of subarry
                ans += n*n;         // to print subarray we can use 
            }                    // for(int k = i; k<=j; k++)
        }
        return ans;
    }
};