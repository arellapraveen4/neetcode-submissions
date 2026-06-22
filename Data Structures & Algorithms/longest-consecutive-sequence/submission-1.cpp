

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int longest=0;

       for(int num:mp){
        if(!mp.count(num-1)){
            int length=1;
            int current=num;
            while(mp.count(current+1)){
                current++;
                length++;
            }
             longest=max(longest,length);
            }
           
        }
        return longest;

       }

};
