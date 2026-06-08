class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit = INT_MIN;
        int max_profit = 0;

        for(int i=0; i<prices.size(); i++){
            min_price = min(min_price , prices[i]);
            profit = prices[i] - min_price;
            max_profit = max(profit , max_profit);
        }

        return max_profit;

    }
};