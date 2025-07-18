class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=piles[0];
        for(int i=0;i<n;i++)
        maxi=max(maxi,piles[i]);

        int low=1,high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long int totalt=0;
            for(int i=0;i<n;i++)
            {
               int curtime=ceil(double(piles[i])/(mid));
               totalt+=curtime;
            }
            if(totalt<=h)
            high=mid-1;
            else low=mid+1;

        } 
        return low;     

    }
};