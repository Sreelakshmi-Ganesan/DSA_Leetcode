class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        long int  maxlength=0;
        unordered_set<int>seq(nums.begin(),nums.end());
        for(auto &num : seq)
        {
            if(!seq.count(num-1))
            {
                int currentnum=num;
               long int currentlen=1;
            
            while(seq.count(currentnum+1))
            {
                currentnum+=1;
                currentlen+=1;
            }
             maxlength=max(currentlen,maxlength);
            }
        }
        return maxlength;
    }
};