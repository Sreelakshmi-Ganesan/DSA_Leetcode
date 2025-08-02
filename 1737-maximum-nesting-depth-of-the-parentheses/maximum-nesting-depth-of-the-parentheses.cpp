class Solution {
public:
    int maxDepth(string s) {
        
        int cur=0,res=0;
        for(auto &ch :s)
        {
            if(ch==')') cur--;
            if(ch=='(')
            {
                cur++;
                res=max(res,cur);
            }
        }
        return res;
    }
};