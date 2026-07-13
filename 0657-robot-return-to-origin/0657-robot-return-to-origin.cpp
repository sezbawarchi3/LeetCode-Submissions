class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map <char, int> m;
        for(char n : moves){
            m[n]++;
        }
        
        return (m['L'] != m['R'] || m['D'] != m['U'])? false : true;
    }
};