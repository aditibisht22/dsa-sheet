class Solution {
public:
    bool isPalindrome(int x) {
       long int og = x;
       long int rev = 0;
        while(x){
            int d = x%10;
            x/=10;
            rev = rev*10 + d;
        }
        if(og < 0) og = -1*og;
        if(og == rev) return true;
        return false;
    }
};