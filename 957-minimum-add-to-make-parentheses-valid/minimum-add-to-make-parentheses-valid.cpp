class Solution {
public:
    int minAddToMakeValid(string s) {
        
        queue<char> q;
        int ct=0;
        for(auto &ch : s)
        {
            if(ch=='('){ 
                q.push(ch);
                ct++;
            }

            if(!q.empty()) 
            {if(ch==')') {
                q.pop();
                ct--;}
                 }
            else ct++;
        }
      return ct;
    }
};