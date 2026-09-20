class Solution {
public:
    int reverseDegree(string s) {
        int ans =0;
        int i =1;
        for(int ch : s){
            int pos = 'z'-ch+1;
            ans += i*pos;
            i++;
        }
        return ans;
    }
};