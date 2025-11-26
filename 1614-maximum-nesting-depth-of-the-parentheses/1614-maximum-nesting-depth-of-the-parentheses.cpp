class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int result = 0;

        for(auto ch : s){
            if(ch == '(') st.push(ch);
            else if(ch== ')') st.pop();
            result = max(int(st.size()), result);

        }
        return result;
    }
};