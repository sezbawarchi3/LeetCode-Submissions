class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0], maxProf = 0;
        for(int n: prices){
            if(bestBuy < n){
                maxProf = max(maxProf, n - bestBuy);
            }

            bestBuy = min(bestBuy, n);
        }
        return maxProf;
    }
};