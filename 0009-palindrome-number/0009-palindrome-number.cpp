class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
       long int og = x;
       long int rev = 0;
        while(x){
            int d = x%10;
            x/=10;
            rev = rev*10 + d;
        }
     
        if(og == rev) return true;
        return false;
    }
};