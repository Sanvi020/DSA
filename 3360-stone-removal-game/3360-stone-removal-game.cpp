class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10;
        int curr=0;
        while(n>=a){
            curr =a;
            n = n-a;
            a--;
        }
        if(curr!=0 && curr%2==0){
            return true;
        }
        return false;
    }
};