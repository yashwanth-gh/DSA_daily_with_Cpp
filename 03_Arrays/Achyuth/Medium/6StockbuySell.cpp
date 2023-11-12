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
