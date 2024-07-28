class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = buy;
        int profit = 0;
        for(int i =1;i<prices.size();i++)
        {
            if(prices[i]> sell )
            {
                sell = prices[i];
                profit += sell - buy;
                buy = sell;
            } 
           
            if(prices[i]<buy && i<prices.size()-1)
            {
                buy = prices [i];
                sell = buy;
            }
        }return profit;
    }
};