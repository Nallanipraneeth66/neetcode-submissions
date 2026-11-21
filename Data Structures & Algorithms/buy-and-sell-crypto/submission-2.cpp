class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int profit=0, k=0;
       for(int i=n-1;i>=0;i--){
        k=max(k,prices[i]);
        profit=max(profit,k-prices[i]);
       } 
       return profit;
    }
};
