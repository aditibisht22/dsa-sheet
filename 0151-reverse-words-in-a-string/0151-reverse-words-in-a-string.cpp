class Solution {
public:
    void rev(string &s){
        
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        string ans ="";
        //1. reverse the string
        rev(s);

        //2. reverse each word
        stringstream ss(s);
        string word;

        while(ss >> word){
            rev(word);
            ans+=word+" ";
        }
        return ans.substr(0, ans.length()-1);
    }
};