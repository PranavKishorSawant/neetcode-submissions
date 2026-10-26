class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min1=-1;
        int profit =0;
        for (int i=1;i<n;i++){
            int min2 = *min_element(prices.begin(),prices.begin()+1 + i);
            int profit2 = prices[i]-min2;
            if (profit2>profit){
                profit = profit2;
            }
        }
        return profit;
    }
};
