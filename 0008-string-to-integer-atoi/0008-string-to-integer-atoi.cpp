class Solution {
public:
    int myAtoi(string s) {

        //empty string
        if(s.length() == 0) return 0;

        //substr white spaces
        int i =0 ;
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        s= s.substr(i);

        //for negative
        int sign = 1;
        if(s[0] == '-'){
            sign = -1;
        } 

        s = (s[0] == '-' || s[0] == '+') ?  s.substr(1):s;

        //logic
        long ans  = 0;
        i = 0;
        while(i < s.length()){
            if(!isdigit(s[i])) break;

            ans = ans*10 + (s[i]-'0');
            if(sign == -1 && ans*-1 < INT_MIN) return INT_MIN;
            if(sign == 1 && ans > INT_MAX) return INT_MAX;

            i++;
        }
        
        return int(ans*sign);
    }
};