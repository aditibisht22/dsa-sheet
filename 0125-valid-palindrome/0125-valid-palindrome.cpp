class Solution {
public:

bool pal(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        string ans = "";
        for(auto ch: s){
            if(isupper(ch))
            ch = ch + 'a' - 'A';

            if(isalnum(ch)){
                 ans+= ch;
            }
        }
        return pal(ans);
    }
};