class Solution {
public:
    bool freqsame(vector<int>&freq, vector<int> &windFreq){
        for(int i = 0; i<26; i++){
            if(freq[i] != windFreq[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        //frequency of s1 characters
        vector<int> freq(26,0);
        for(int i = 0; i<s1.length(); i++){
               freq[s1[i] - 'a']++;
        }
        
        int windSize = s1.length(); 

        for(int i = 0; i<s2.length(); i++){
            vector<int> windFreq(26,0);
            int windIdx = 0; int idx =  i;

            while(windIdx < windSize && idx < s2.length()){
                
                windFreq[s2[idx]-'a']++;
                idx++; windIdx++;
            }
            if(freqsame(freq,windFreq)){
                return true;
            }
        }
        return false;
    }
};