class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st = 0, end = letters.size() - 1;
        if(target >= letters[end]) return letters[st];
        while(st <= end){
            int mid = st + (end - st)/2;
            if(letters[mid] ==  target && letters[mid + 1] != target) {
                return letters[mid+1];
            }
            if(letters[mid] > target) end = mid - 1;
            else st = mid + 1;
        }
        return letters[st];
    }
};