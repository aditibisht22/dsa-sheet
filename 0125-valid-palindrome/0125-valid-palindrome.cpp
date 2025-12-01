class Solution {
public:

bool ispal(string ans){
    int i = 0;
    int j = ans.length()-1;

    while(i<j){
        if(ans[i] != ans[j]) return false;
         i++;
         j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        string ans = "";
        for(auto ch: s){
            if(isupper(ch)) ch=ch-'A' +'a';
            if(isalnum(ch)) ans+=ch;
        }
        return ispal(ans);
    }
};