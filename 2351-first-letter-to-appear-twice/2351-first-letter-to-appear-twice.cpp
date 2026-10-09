class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> a;
        char ans;
        
        for(int i=0; i<s.length(); i++){
            if(a.find(s[i])==a.end()){
                a.insert(s[i]);
            }
            else{
                return s[i];
            }
        }
        return ' ';
    }
};