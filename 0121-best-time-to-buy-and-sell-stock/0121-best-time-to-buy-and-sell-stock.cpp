class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MAX;
        int max_profit=INT_MIN;
        int index;
        for(int i=0;i<prices.size();i++){
            profit=min(profit,prices[i]);
            int diff=prices[i]-profit;
            max_profit=max(max_profit,diff);
        }
       
        return max_profit;
    }
};