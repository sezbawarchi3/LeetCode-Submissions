class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i{0}, sum = 0, sumcheck = 0;
        while(i < nums.size()){
            sum += i+1;
            sumcheck += nums[i++];
        }
        return sum - sumcheck;
    }
};