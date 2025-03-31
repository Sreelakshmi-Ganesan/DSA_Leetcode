int maxProfit(int* prices, int pricesSize) {
    int mini=prices[0];
    int maxprofit=0;
    for(int i=0;i<pricesSize;i++)
    {
        if(mini>prices[i])
         mini=prices[i];
         else{
            int profit=prices[i]-mini;
            if( profit>maxprofit)
              maxprofit=profit;
         }

    }
    
    return maxprofit;
}