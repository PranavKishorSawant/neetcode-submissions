class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit =0;
        int profit=0;
        for (int i =1;i<n;i++){
            int min = *min_element(prices.begin(),prices.begin()+i);
            profit = prices[i] - min;
            if (profit > max_profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
};
