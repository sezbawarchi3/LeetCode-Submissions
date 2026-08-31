class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> m;
        for(char c : sentence){
            m[c]++;
        }
        auto it = m.begin();
        int count = 0;
        while(it != m.end()){
            count++;
            it++;
        }
        if(count != 26) return false;
        return true;
    }
};