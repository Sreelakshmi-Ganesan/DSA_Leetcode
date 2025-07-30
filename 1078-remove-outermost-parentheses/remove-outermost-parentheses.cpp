class Solution {
public:
    string removeOuterParentheses(string s) {
     string ans="";
     int ct=0;
     for(int i=0;i<s.length();i++)
     {
        if(s[i]==')') ct--;
        if(ct!=0) ans+=s[i];
        if(s[i]=='(') ct++;
     }   
     return ans;
    }
};