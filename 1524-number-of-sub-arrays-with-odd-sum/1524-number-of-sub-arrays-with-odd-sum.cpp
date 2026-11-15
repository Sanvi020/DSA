class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count = 0;
        int even =1;
        int odd = 0;
        int mod = 1e9+7;
        int sum =0;

        for(int i=0 ; i<arr.size(); i++){
            sum += arr[i];

            if(sum%2==0){
                count = (count+odd)%mod;
                even++;
            }

            else{
                count = (count+even)%mod;
                odd++;
            }
        }
        return count;
    }
};