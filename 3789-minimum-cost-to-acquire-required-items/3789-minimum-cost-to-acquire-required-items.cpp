class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;

        int common = min(need1,need2);

        ans += 1LL*common*min(cost1+cost2,costBoth);

        int rem = max(need1,need2)-common;

        if(need1>need2){
            ans += 1LL* rem*cost1;
        }
        else{
            ans += 1LL*rem*cost2;
        }

        return min(ans,1LL*max(need1,need2)*costBoth);
    }
};