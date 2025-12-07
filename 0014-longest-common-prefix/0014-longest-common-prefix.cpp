class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        //sort the vector
        auto lambda = [](string &a, string &b){
            return a<b;
        };
        sort(strs.begin(), strs.end(), lambda);
        //compare only first and last 
        string first = strs[0];
        string last = strs[strs.size()-1];

        for(int i = 0; i<first.length(); i++){
            if(first[i] != last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;


    }
};