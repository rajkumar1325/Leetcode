class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Iterate over the array
        int maxProfit =0;
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i]< prices[i+1]){ //buy at low and sell at high
                maxProfit += abs(prices[i+1] - prices[i]);
            }
        }
        return maxProfit;
    }
};
