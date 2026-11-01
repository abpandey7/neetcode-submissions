class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxProfit = 0, globalMin = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            maxProfit = max(prices[i] - globalMin, maxProfit);
            globalMin = min(prices[i], globalMin);
        }

        return maxProfit;
    }
};
