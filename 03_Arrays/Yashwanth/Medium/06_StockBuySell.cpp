//? Brute force O(N^2)
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int n = prices.size();
    int maxi = 0;
    for(int i=0;i<n;i++){
        int buy = prices[i];
        for(int j=i;j<n;j++){
            int sell = prices[j];
            maxi = max(maxi,sell-buy);
        }
    }
    return maxi;
    
}

//? OPTIMAL ~ >O(N) 
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int n = prices.size();
    int maxiProfit = 0;
    int min=INT_MAX;
    for(auto ele:prices){
        if(ele<min)min=ele;
        maxiProfit = max(maxiProfit,ele-min);
    }

    return maxiProfit;
    
}
