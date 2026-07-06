class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        char c = 0;
        for(char n: s){
            c ^= n;
        }
        return c;
    }
};