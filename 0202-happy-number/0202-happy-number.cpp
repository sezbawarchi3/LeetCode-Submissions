class Solution {
public:
    bool isHappy(int n) {
        while(n > 4){
            int temp = n;
            n = 0;
            while(temp > 0){
                n += (temp % 10) * (temp % 10);
                temp /= 10;
            }
        }
        return n == 1 ? true : false;
    }
};