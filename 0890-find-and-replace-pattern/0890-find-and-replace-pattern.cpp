class Solution {
public:

    void mapping(string &str){
        char start = 'a';
        vector<char>mpp(256, 0);
        for(auto ch: str){
            if(mpp[ch] == 0){
                mpp[ch] = start;
                start++;
            }
        }
        for(int i = 0; i<str.length(); i++){
            char ch = str[i];
            str[i] = mpp[ch];
        }
    
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        //pattern ko bhi normalise krdo or word ko bhi
        mapping(pattern);
        vector<string>ans;
        for(auto word: words){
            string original = word;
            mapping(word);
            if(word == pattern){
                ans.push_back(original);
            }
        }
        return ans;
    }
};