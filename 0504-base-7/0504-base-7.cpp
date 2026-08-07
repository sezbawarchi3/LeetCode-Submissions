class Solution {
public:
    string convertToBase7(int num) {
        string base7;
        if(num > 0){
            while(num != 0){
                base7 += num%7 + '0';
                num /= 7; 
            }
            reverse(base7.begin(), base7.end());
            return base7;
        }
        else if(num == 0) return "0";
        else{
            num *= -1;
            while(num != 0){
                base7 += num%7 + '0';
                num /= 7; 
            }
            reverse(base7.begin(), base7.end());
            return "-" + base7;
        }
    }
};