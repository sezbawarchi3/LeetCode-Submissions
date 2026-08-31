class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i(0), index(0);
        while(i < n){
            char curr = chars[i];
            int count = 0;
            while(i < n && curr == chars[i]){
                count++; i++;
            }
            
            chars[index] = curr;
            index++;
            string cnt = to_string(count);
            if(count > 1){
                for(char c : cnt){
                    chars[index] = c;
                    index++;
                }
            }
        }
        return index;
    }
};