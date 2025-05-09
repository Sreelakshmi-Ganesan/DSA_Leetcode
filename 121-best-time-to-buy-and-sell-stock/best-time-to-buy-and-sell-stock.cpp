class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            int currprice=prices[i];
            if(currprice<min)
            min=currprice;
            else{
                maxprofit=max(maxprofit,currprice-min);
            }
        }
    return maxprofit;
    }
};