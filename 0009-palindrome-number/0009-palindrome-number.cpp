class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        //reverse the number
        int temp = x; //121
        long reversed = 0;
        while(temp){
            int d = temp%10; 
            temp/= 10; 
            reversed = reversed*10 + d; 
        }

        return reversed == x;
    }
};