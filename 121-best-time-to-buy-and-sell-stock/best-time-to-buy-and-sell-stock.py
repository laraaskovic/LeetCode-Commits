class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currMax = 0

        i = 0
        j = 1

        while j < len(prices):
            if prices[i] < prices[j]: #profit
                nMax =  prices[j] - prices[i]
                currMax = max(currMax, nMax)
                j += 1
            else:
                #move i to next one
                i = j
                j += 1
        
        return currMax

 