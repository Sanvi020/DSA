class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i =0;
        int count = 0;
        while(i<arr1.size()){
            bool ans = true;
            for(int j=0; j<arr2.size(); j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    ans = false;
                    break;
                }
            }
            if(ans){
                count++;
            }
            i++;
        }
        return count;
    }
};