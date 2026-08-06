class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int n=prices.size();
        int profit;
        int minp=prices[0];
        for(int i=0;i<n;i++){
                 profit=prices[i]-minp;
            
            mp=max(mp,profit);
            minp=min(minp,prices[i]);
        }
        
    return mp;}
};