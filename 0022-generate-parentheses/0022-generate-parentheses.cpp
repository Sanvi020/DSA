class Solution {
public:
    void parenthesis(string s, int open , int close , int n, vector<string> &ans){
        if(open==n && close==n){
            ans.push_back(s);
        }

        if(open<n){
            parenthesis(s+"(",open+1, close, n, ans);
        }

        if(close<open){
            parenthesis(s+')',open ,close+1,n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s ="";
        int open =0; 
        int close=0;
        vector<string> ans;
        parenthesis(s,open,close,n,ans);

        return ans;
    }
};