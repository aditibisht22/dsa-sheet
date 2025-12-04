class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;

        //1. fill map with words and their freq
        for(auto &word: words){
            mp[word]++;
        }

        vector<pair<string, int>>vec;
        //2. populate vector of pairs with {word, freq}
        for(auto &a: mp){
            vec.push_back({a.first, a.second});
        }

        auto lambda =[](pair<string,int>&p1, pair<string, int>&p2){
             if(p1.second == p2.second){
               return p1.first < p2.first;
             }
             return p1.second > p2.second;
        };

        //3. sort of vector
        sort(vec.begin(), vec.end(), lambda);

        //4. insert into result k words
        vector<string> result(k);
        int i = 0;
        while(i<k){
            result[i] = vec[i].first;
            i++;
        }
        return result;

    }
};