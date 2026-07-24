class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size() <= 2) return true;
        int i{0}, count = 0;
        while(i < nums.size() - 1){
            count = (nums[i] <= nums[i+1]) ? count : count + 1;
            if(count > 1) return false;
            i++; 
        }
        if(nums[nums.size() - 1] > nums[0]) count++;
        return !(count <= 1) ? false : true;
    }
};