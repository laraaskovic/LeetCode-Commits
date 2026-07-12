class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) {
            return 0;
        }

        int minPrice = prices[0];

        int best = 0;

        for (int i = 0 ; i < prices.size(); i++) {
            int prof = prices[i] - minPrice;

            if (prof > best) {
                best = prof;
            }

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

        }
        return best;


    }
};