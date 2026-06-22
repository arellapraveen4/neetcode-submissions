class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto it:t){
            
                freq[it]--;
            
        }
        for(auto it:freq){
            if(it.second!=0)
            return false;
        }

        return true;
    }
};
