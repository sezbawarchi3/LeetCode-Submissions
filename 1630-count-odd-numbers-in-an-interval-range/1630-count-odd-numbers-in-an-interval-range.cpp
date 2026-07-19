class Solution {
public:
    int countOdds(int low, int high) {
        if (high - low == 1) return 1;
        return (high - low) % 2 == 0 ? (low % 2 == 0 ? (high - low)/2 : (high - low)/2 +1) : (high - low)/2 +1;
    }
};