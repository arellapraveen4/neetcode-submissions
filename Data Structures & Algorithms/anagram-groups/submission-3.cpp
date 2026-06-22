class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

       
       for(auto i:strs){
        vector<int> freq(26,0);
        for(auto c:i){
            freq[c-'a']++;
        }
        string s="";
        for(auto j:freq){
         s+="#"+to_string(j);
        }
        mp[s].push_back(i);
       } 
       vector<vector<string>> result;
       for (auto &it : mp) {
            result.push_back(it.second);
        }

        return result;

    }
};
