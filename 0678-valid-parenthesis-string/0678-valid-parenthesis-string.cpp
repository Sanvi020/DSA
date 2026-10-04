class Solution {
public:
    bool checkValidString(string s) {
        stack<int> o;
        stack<int> c;

        for(int i =0; i<s.length(); i++){
            if(s[i]=='('){
                o.push(i);
            }
            else if(s[i] == '*'){
                c.push(i);
            }
            else{
                if(!o.empty()){
                    o.pop();
                }
                else if(!c.empty()){
                    c.pop();
                }
                else{
                    return false;
                }
            }
            }
                        while(!o.empty() && !c.empty()){
                if(o.top()<c.top()){
                    o.pop();
                    c.pop();
                }
                else{
                    return false;
                }
        }
        return o.empty();
    }
};