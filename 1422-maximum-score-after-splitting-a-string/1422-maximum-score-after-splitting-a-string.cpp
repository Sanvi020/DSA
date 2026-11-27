class Solution {
public:
    int maxScore(string s) {
       int ans = INT_MIN;
       int z = 0;
       int o = 0;
       for(char c :s){
        if(c=='1'){
            o++;
        }
       }
       for(int i=0; i<s.length()-1; i++){
        if(s[i]=='0'){
            z++;
        }
        else{
            o--;
        }

        ans = max(ans,z+o);
       }
       return ans;
    }
};