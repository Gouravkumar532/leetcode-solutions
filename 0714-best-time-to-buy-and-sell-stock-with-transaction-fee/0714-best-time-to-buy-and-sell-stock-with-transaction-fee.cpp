class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit = 0;
        int buy = -prices[0];
        for(int i= 0;i<prices.size();i++){
            int oldprofit = profit;
            int oldbuy = buy;

            profit = max(oldprofit,prices[i]+oldbuy-fee);
            buy = max(oldbuy,oldprofit-prices[i]);
        }
        return profit;
    }
};