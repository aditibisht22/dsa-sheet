class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char>mapping(256,0);
        char start = 'a';
        for(auto ch: key){
            //EVERY SINGLE TIME i do ch == 0 instead of mapping[ch]!!!!!!!
            if(mapping[ch] == 0 && ch != ' '){
            mapping[ch] = start;
            start++;
        }}
        for(int i = 0; i<message.length(); i++){
            if(message[i] != ' '){
            char ch = message[i];
            message[i] = mapping[ch];
            }
        }
        return message;
    }
};