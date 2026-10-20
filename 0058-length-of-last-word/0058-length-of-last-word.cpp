class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans =0;
        int count =0;

        for(int i =0; i<s.length(); i++){
            if(s[i] == ' '){
                count =0;
            }
            else{
                count ++;
            }
            if(count!=0){
                ans = count;
            }
        }
        return ans;
    }
};