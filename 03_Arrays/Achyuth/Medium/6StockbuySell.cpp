int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int count=0;
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            if(prices[j]-prices[i]>count){
                count=prices[j]-prices[i];
            }

        }
    }
    return count;
}
//OPTIMAL SOLUTION
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int minn=prices[0];
    int profit=0;
    for(int i=1;i<prices.size();i++){
        int count=prices[i]-minn;
         profit=max(profit,count);
         minn=min(minn,prices[i]);      
    }
    return profit;
}