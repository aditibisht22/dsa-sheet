class Solution {
public:

    void replace(string &s){
        char start = 'a';
        char mapping[300] = {0};

        for(auto ch: s){
            if(mapping[ch] == 0){
            mapping[ch] = start;
            start++;
            }
        }

        //IMP- Update the string
        for(int i = 0; i<s.length(); i++){
            s[i] = mapping[s[i]];
        }
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> ans;

        replace(pattern);
       
        for(auto element : words){
            string temp = element;
            replace(temp);
            if(temp == pattern)
            ans.push_back(element);
        }
        return ans;
    }
};