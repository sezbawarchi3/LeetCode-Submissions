class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i(0);
        while(i < nums.size()){
            int j = i+1;
            while (j < nums.size()){
                if(nums[i] == nums[j]){
                    nums.erase(nums.begin() + j);
                }
                else j++;
            }
            i++;
        }
        return nums.size();
    }
};