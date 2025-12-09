class Solution {
public:
    string customSortString(string order, string s) {

        auto lambda = [&](char &ch1, char &ch2){
            return order.find(ch1) < order.find(ch2);

        };

        sort(s.begin(), s.end(), lambda);
        return s;
    }
};