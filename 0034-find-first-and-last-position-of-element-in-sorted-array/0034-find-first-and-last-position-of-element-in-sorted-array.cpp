class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();
        for (int i{0}; i < n; i++){
            if (target == nums[i]){
                ans[0] = i;
                break;
            }
        }
        for (int i{n-1}; i > 0; i--){
            if (target == nums[i]){
                ans[1] = i;
                return ans;
            }
        }
        ans[1] = ans[0];
        return ans;
    }
};