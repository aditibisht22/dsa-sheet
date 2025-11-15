class Solution {
public:
    string decodeMessage(string key, string message) {
        
        //create mapping
        char start = 'a';
        char mapping[300] = {0};
        string ans="";

        for(auto ch: key){
            if(mapping[ch] == 0 && ch != ' '){
            mapping[ch] = start;
            start++;
            }
            
        }

        //use mapping
        for(auto ch: message){
            if(ch == ' ')
            ans.push_back(' ');
            else{
                ans.push_back(mapping[ch]);
            }
        }
        return ans;
    }

};
