class Solution {
public:
    int countOdds(int low, int high) {
        int x = high -low;
        if (x == 1) return 1;
        return (x) % 2 == 0 ? (low % 2 == 0 ? x/2 : x/2 +1) : x/2 +1;
    }
};