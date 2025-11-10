class Solution {
public:
      string removeOuterParentheses(string s) {
       string ans = "";
       int count = 0;

       for(auto ch: s){
        if(ch == ')') count--;
       
        if(count !=0) 
        ans+=ch;

        if(ch == '(') count++;
       }
       return ans;
    }
};
