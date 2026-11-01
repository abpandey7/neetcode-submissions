class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxProfit = 0, globalMin = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            maxProfit = max(prices[i] - globalMin, maxProfit);

            if(prices[i] < globalMin)
            {
                globalMin = prices[i];
            }
        }

        return maxProfit;
    }
};
