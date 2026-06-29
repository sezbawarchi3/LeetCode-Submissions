class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size());
        int i = 0;
        int maxEl = INT_MIN;
        for(int n: candies){
            maxEl = max(n, maxEl);
        }
        while(i < candies.size()){
            if(candies[i] + extraCandies >= maxEl){
                res[i] = true;
            }
            i++;
        }
        return res;
    }
};