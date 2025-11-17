class Solution {
public:
    int lengthOfLastWord(string s) {
       stringstream ss(s);
       string word;
       stack<string> st;

       while(ss>>word){
            st.push(word);
       }
     return  st.top().size();
    }
};