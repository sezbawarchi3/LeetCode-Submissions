class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int n : arr){
            m[n]++;
        }
        unordered_map<int, int> freq;
        for(auto n : m){
            freq[n.second]++;
        }
        for(auto it : freq){
            if(it.second > 1) return false;
        }
        return true;
    }
};