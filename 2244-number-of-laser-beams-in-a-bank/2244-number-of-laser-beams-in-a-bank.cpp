class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0; 
        int result = 0;
        for(int i = 0; i<bank.size(); i++){
                 int curr = 0;
                 for(auto ch: bank[i]){
                    if(ch == '1') curr++;
                 }
                 result+= curr* prev;
                 if(curr != 0) prev = curr;
        }
        return result;
    }
};