class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1;
        int s = 0;
        while(n>0){
            int digit = n%10;
            p *= digit;
            s += digit;
            n = n/10;
        }
        int ans = 0;
        ans = p-s;
        return ans;
    }
};