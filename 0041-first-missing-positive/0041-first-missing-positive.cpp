class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int m = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
            if(nums[i]>m){
                m = nums[i];
            }
        }

        for(int i=1; i<=m; i++){
            if(s.find(i) == s.end()){
                return i;
            }
        }
        return max(1,m+1);
    }
};