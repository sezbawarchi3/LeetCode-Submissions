class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
       int count = 0, temp = n;
       while(temp != 0){
        temp /= 2;
        count++;
       }
       return pow(2, count) - n - 1;
    }
};