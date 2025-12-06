class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxi = 0;

        for(auto ch: s){
            if(ch == ')') count--;
            if(ch == '(') count++;
            if(count > maxi) maxi =  max(count, maxi);

        }
        return maxi;
    }
};