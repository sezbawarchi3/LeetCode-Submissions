class Solution {
public:
    int mySqrt(int x) {
        if (x==1) return 1;
        long i{0};
        while (i <= x/2){
            if(i*i > x){
                return i-1;
            }
            i++;
        }
        return i-1;
    }
};