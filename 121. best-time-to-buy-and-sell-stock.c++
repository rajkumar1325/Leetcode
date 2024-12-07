//BEATS 100 PERCENT AND COMPLEXITY OF O(N) in c++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            int Profit = prices[i] - minPrice;
            maxProfit = max(Profit, maxProfit);
        }
        return maxProfit;
    }
};
