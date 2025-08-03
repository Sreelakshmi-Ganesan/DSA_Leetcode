class Solution {
    private:
     int maxi(vector<int> &freq)
     {
        int mx=INT_MIN;
        for(int i=0;i<26;i++)
        mx=max(mx,freq[i]);

        return mx;
     }

     int mini(vector<int>&freq)
     {
        int mi=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                mi=min(mi,freq[i]);
            }

        }
        return mi;
     }
public:
    int beautySum(string s) {
        
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            vector<int>freq(26,0);
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                int beauty=maxi(freq)-mini(freq);
                 sum+=beauty;
            }
        }
        return sum;
    }
};