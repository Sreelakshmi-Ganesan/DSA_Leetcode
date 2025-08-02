class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int n=first.length();
        string last=strs[strs.size()-1];
        string res="";
        for(int i=0;i<n;i++)
        {
            if(first[i]!=last[i])
            break;
            res+=first[i];
        }
        if(res.size()>0) return res;
        else return "";
     

    }
};