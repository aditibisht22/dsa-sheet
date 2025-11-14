class Solution {
public:
    int expand(string s, int i, int j){
        int count = 0;
              while(i>=0 && j< s.length() && s[i] == s[j]){
                count++;
                i--;
                j++;
              }
              return count ;
    }

    int countSubstrings(string s) {
        int count=0;
        int odd = 0;
        int even = 0;
        for(int i = 0; i<s.length(); i++){
            
             odd = expand(s,i,i);
             even = expand(s,i,i+1);

            count+= odd + even;
        }
        return count;
    }
};