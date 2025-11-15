class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans;

        string word1 = strs[0];
        string word2 = strs[strs.size()-1];

        for(int i = 0; i< word2.length(); i++){
              if(word1[i] != word2[i])
              break;
              else{
               ans.push_back(word1[i]);
              }
        }
        return ans;
        
    }
};