class Solution {
public:
    string solve(string s, int &i){
        string ans;
        while(i<s.length() && s[i]!=')'){
            if(s[i]=='('){
                i++;

                string c = solve(s,i);

                for(int j=c.length()-1; j>=0; j--){
                    ans += c[j];
                }
                i++;
            }
            else{
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
    string reverseParentheses(string s) {
        int i =0;
        string ans = solve(s,i);
        return ans;
    }
};