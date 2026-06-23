class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;int maxlen=0;
        unordered_set<char>mp;
        for(int i=0;i<s.size();i++){
            while(mp.count(s[i])){
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[i]);
            maxlen=max(maxlen,i-l+1);
        }
        return maxlen;
    }
};
