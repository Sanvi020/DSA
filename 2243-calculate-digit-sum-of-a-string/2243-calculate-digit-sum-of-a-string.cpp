class Solution {
public:
    string digitSum(string s, int k) {
        string a = s;

        while(a.length()>k){
            int sum = 0;
            string temp = "";

            for(int i=0 ;i<a.length();i++){
                sum += a[i]-'0';

                if((i+1)%k==0 || i==a.length()-1){
                    temp += to_string(sum);
                    sum = 0;
                }
            }
            a = temp;
        }
        return a;
    }
};