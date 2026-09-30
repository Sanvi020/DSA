class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> l;
        int count =-1;

        for(int i=0; i<seq.length(); i++){
            if(seq[i] == '('){
                count++;
                l.push_back(count);
            }
            else if(seq[i]==')'){
                l.push_back(count);
                count--;
            }
        }

        vector<int> ans(l.size(),0);
        for(int i= 0; i<l.size(); i++){
            if(l[i]%2==0){
                ans[i] = 0;
            }
            else{
                ans[i] = 1;
            }
        }
        return ans;
    }
};