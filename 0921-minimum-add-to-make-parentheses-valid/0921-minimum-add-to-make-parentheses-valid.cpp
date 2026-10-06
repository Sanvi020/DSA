class Solution {
public:
    int minAddToMakeValid(string s) {
        int countopen =0;
        int countclose =0;

        for(int i =0; i<s.length(); i++){
            if(s[i]=='('){
                countopen++;
            }
            else if(s[i]==')' && countopen>0){
                countopen--;
            }
            else{
                countclose++;
            }
        }
        return countopen+countclose;
    }
};