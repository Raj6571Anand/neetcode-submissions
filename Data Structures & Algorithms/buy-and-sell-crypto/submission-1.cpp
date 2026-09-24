class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        
        int profit=0;
        for(int j=0;j<prices.size();j++){
            if(prices[j]<minp){
                minp=prices[j];
            }
            profit=max(profit,prices[j]-minp);

        }
        
        return profit;
        
    }
};
