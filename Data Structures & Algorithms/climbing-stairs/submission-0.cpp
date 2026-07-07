class Solution {
public:
    int climbStairs(int n) {
        int var1=1;
        int var2=1;
       
        for(int i=2;i<=n;i++){
         int count=var1+var2;
         var1=var2;
         var2=count;
        }
       return var2; 
    }
};
