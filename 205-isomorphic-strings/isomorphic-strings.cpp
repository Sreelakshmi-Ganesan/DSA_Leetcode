class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>ms;
        unordered_map<char,char>ts;

        for(int i=0;i<s.length();i++)
        {
            char s1=s[i] ;
            char t1=t[i] ;

            if(ms.count(s1))
            {
                if(ms[s1] != t1) return false;
            }
            else {
                ms[s1]=t1;
            }

            if(ts.count(t1))
            {
                if(ts[t1]!=s1) return false; }

                else {
                    ts[t1]=s1;
                }
        }
        return true;

    }
};