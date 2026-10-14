class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        // sum>9*num return ""
        // greedy approach main 9 ko add karte jayege 
        
        string s = "";
        int count =0;

        if(sum>9*num){
            return "";
        }

        int nine = sum/9;
        int rem = sum%9;

        for(int i=0; i<nine; i++){
            s += '9';
            count ++;
        }
        if(rem>0){
            string r = to_string(rem);
            s += r;
            count++;
        }

        while(count<num){
            s+='0';
            count++;
        }

        return s;
    }
};