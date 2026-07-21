class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int n : nums){
            m[n]++;
        }
        auto it = m.begin();
        while(it != m.end()){
            if(it -> second > 2) return false;
            it++;
        }
        return true;
    }
};