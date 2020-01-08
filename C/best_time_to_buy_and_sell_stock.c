int maxProfit(int* prices, int pricesSize){
    if(pricesSize == 1 || pricesSize == 0) return 0;
        
    unsigned int profit = 0;
    unsigned int low_price = prices[0];
        
    for(int i = 0; i < pricesSize; i++) {
        if(prices[i] < low_price) low_price = prices[i];
        if(prices[i] - low_price > profit) profit = prices[i] - low_price;
    }
    return profit;
}
