class Solution {
public:
    bool isValid(vector<int>& nums, int k, int mid){
        int pages{0}, std{0}, i{0};
        while(i < nums.size()){
            if(nums[i] > mid) return false;
 
            if(pages + nums[i] <= mid){
                pages += nums[i];
            }
            else{
                std++;
                pages = nums[i];
            }
            i++;
        }
        return std + 1 <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int st = 0, end = 0, ans = -1;
        for(int n : nums){
            end += n;
        }
        while(st <= end){
            int mid = st + (end - st)/2;

            if(isValid(nums, k, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }
};