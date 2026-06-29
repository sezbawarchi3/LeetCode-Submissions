class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0], maxProf = 0;
        for(int i{0}; i < prices.size(); i++){
            if(bestBuy < prices[i]){
                maxProf = max(maxProf, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProf;
    }
};