class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1 or prices.size() == 0) return 0;
        
        unsigned int profit = 0;
        unsigned int low_price = prices[0];
        
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < low_price) low_price = prices[i];
            if(prices[i] - low_price > profit) profit = prices[i] - low_price;
        }
        return profit;
    }
};
