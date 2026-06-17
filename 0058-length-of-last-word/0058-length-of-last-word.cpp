class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum{0};
        for(int i = s.length() -1; i >= 0; i--){
            if (s[i] != ' '){
                sum++;
            }
            else if (sum > 0) {
                return sum;
            }                
        }
        return sum;
    }
};