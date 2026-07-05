class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i{0}, j{0};
        while(i < word1.length() && j < word2.length()){
            if(i < word1.length()){
                res += word1[i++];
            }
            if(j < word1.length()){
                res += word2[j++];
            }
        }
        if(word1.length() < word2.length()){
            while(j < word2.length()){
                res += word2[j++];
            }
        }
        else{
            while(i < word1.length()){
                res += word1[i++];
            }
        }
        return res;
    }
};