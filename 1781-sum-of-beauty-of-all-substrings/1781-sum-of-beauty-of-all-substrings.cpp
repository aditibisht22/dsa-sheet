class Solution {
public:

    int maxfreq(int freq[]){
        int maxi = INT_MIN;
        for(int i = 0; i<26; i++){
             maxi = max(freq[i] , maxi);
        }
        return maxi;
    }

    int minfreq(int freq[]){
        int mini = INT_MAX;
        for(int i = 0; i<26; i++){
            if(freq[i] != 0)
            mini = min(freq[i] , mini);
        }
        return mini;
    }

    int beautySum(string s) {
        int sum = 0;
        for(int i = 0; i<s.length(); i++){
            int freq[26] = {0};
            for(int j = i; j<s.length(); j++){
               freq[s[j] - 'a']++;
               int beauty =  maxfreq(freq) - minfreq(freq);
               sum+= beauty;
            }
        }
        return sum;
    }
};