class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i{0}; i < nums.size(); i++){
            m[nums[i]]++;
        }
        auto it = m.begin();
        while (it != m.end()){
            if (it -> second == 1){
                return it -> first;
            }
            it++;
        }
        return it -> first;
    }
};