class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int index = -1;
        for(int i =0; i<nums.size();i++){
            int sum = 0;
            int a = nums[i];
            while(a>0){
                int digit = a%10;
                sum += digit;
                a = a/10;
            }
            if(sum == i){
                index = i;
                break;
            }
        }
        return index;
    }
};