class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==0) return 1;

        int pre = 1, cur = 1;
        for(int i{2}; i<=n ; i++){
            int temp = cur;
            cur = pre + cur;
            pre = temp;
        }
    return cur;
    }
};