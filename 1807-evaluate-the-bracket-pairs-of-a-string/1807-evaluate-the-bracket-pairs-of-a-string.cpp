class Solution {
public:
    string evaluate(string s, vector<vector<string>>&a) {
        unordered_map<string,string> m;
        for(int i=0; i<a.size();i++){
            m[a[i][0]] = a[i][1];
        }
        string ans;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                string c;
                i++;
                while(i<s.size()&&s[i]!=')'){
                    c += s[i];
                    i++;
                }
                if(m.find(c)!=m.end()){
                    ans+= m[c];
                }
                else{
                    ans+= '?';
                }
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};