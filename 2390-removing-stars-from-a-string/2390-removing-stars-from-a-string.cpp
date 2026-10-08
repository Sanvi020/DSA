class Solution {
public:
    string removeStars(string st) {
        string ans = "";
        stack<char> s;

        for(int i=0; i<st.length(); i++){
            if(st[i]=='*'){
                s.pop();
            }
            else{
                s.push(st[i]);
            }
        }
        while(!s.empty()){
            ans+= s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};