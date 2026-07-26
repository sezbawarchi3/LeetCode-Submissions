class Solution {
public:
    string removeOccurrences(string t, string s) {
        int i{0};
        while(t.size() > 0 && t.find(s) < t.length()){
                t.erase(t.find(s), s.length());
        }
        return t;
    }
};