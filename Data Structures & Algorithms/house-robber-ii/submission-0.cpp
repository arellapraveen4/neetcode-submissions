class Solution {
public:
    int linearrobber(vector<int> & nums,int start,int end){
        int prev2=0;
        int prev1=0;
 for(int i=start;i<=end;i++){
    int current=max(prev1,prev2+nums[i]);
    prev2=prev1;
    prev1=current;
 }
 return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        if(n==1)
        return nums[0];
       int case1=linearrobber(nums,0,n-2);
       int case2=linearrobber(nums,1,n-1);
       return max(case1,case2);
        
    }
};
