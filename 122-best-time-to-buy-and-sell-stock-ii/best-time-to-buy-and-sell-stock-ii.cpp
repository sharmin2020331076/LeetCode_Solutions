class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(buy > prices[i])
            buy = prices[i];
            else{
            profit += prices[i]-buy;
            buy =  prices[i];
            //7 1 5 3 6 4
            }

        }

        return profit;
    }
};