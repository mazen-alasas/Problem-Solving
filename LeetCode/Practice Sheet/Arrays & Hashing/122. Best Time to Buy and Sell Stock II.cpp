class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for(int i = 1; i < (int)prices.size(); i++)
            max_profit += (prices[i] > prices[i - 1]) * (prices[i] - prices[i - 1]);
        return max_profit;
    }
};