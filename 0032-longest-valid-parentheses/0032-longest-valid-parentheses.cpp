class Solution {
public:
    int longestValidParentheses(string st) {
        stack<int> s;
        s.push(-1);
        int ans = 0;

        for(int i=0; i<st.length(); i++){
            if(st[i] == '('){
                s.push(i);
            }
            else{
                s.pop();
            }

            if(s.empty()){
                s.push(i);
            }
            else{
                ans = max(ans,i-s.top());
            }
        }
        return ans;
    }
};