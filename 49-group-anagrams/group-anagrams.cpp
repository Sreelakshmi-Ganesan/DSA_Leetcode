class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      
     unordered_map<string, vector<string>> group;
     
     for(string s : strs)
     {
        string key = s;
        sort(key.begin(),key.end());
        group[key].push_back(s);
     }
     vector<vector<string>> result;
     for(auto it : group)
     {
        result.push_back(it.second);
     }

     return result;
    }
};