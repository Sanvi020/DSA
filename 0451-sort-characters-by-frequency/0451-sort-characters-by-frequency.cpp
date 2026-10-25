class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> m;
        string ans;

        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

        for(auto x : m){
            pq.push({x.second,x.first});
        }

        while(!pq.empty()){
            char ch = pq.top().second;
            int freq =  pq.top().first;


            for(int i=0; i<freq; i++){
                ans += ch;
            }

            pq.pop();
        }
        return ans;
    }
};