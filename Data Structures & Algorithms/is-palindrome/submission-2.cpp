// 
class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(char c:s){
            
            if(isalnum(c)){
                char p=tolower(c);
                x+=p;
            }
        }
        string result="";
        for(int i=x.size()-1;i>=0;i--){
            result+=x[i];

        }
        if(result==x){
            return true;
        }
        return false;
        
    }
};
