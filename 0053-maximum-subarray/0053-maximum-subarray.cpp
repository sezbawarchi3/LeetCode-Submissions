class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, cSum = 0;
        for(int n: nums){
            cSum += n;
            maxSum = max(cSum, maxSum);
            if (cSum < 0){
                cSum = 0;
            }
        }
        return maxSum;
    }
};