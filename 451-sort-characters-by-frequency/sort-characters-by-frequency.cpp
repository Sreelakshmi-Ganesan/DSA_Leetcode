class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
      unordered_map<char,int> freq;
      for(auto ch: s) freq[ch]++;

      vector<pair<char,int>>farr;
      for(auto [ch,fq] : freq)
      {
        farr.push_back({ch,fq});
      }
      auto cmp=[&](pair<char,int> &a, pair<char,int>&b)
      {
        return a.second>b.second;
      };
      sort(farr.begin(),farr.end(),cmp);
      string ans="";
      for( auto [ch,fq] :farr)
      {
        ans.append(fq,ch);
      }
     return ans;
    }
};