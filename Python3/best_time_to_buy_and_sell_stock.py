class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1 or len(prices) == 0: return 0
        
        profit = 0
        low_price = prices[0]
        
        for price in prices:
            if price < low_price: low_price = price
            if price - low_price > profit: profit = price - low_price
        
        return profit
