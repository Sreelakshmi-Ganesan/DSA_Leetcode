class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>temp;
        int n=temperatures.size();
        vector<int> res(n,0);
    
        for(int i=0;i<n;i++)
        {  while(!temp.empty() && temperatures[i]>temperatures[temp.top()])
           {
            int previndex=temp.top();
            temp.pop();
            res[previndex]=i-previndex;
           }
            temp.push(i);
        }
        return res;
    }
};