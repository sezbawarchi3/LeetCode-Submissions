class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int i{0};
        bool flag, flag2;
        int index = 0;
        while(i < nums.size() - 1){
            if((nums[i] - nums[i+1]) != 0){
                flag = nums[i] - nums[i+1] < 0 ? false : true;
                index = i;
                break;
            }
            i++;
        }
        for(int j{index + 1}; j < nums.size() - 1; j++){
            if(nums[j+1] - nums[j] == 0) continue;
            int diff = nums[j] - nums[j+1];
            flag2 = diff < 0 ? false : true;
            if((flag != flag2)) return false;
        }
        return true;
    }
};