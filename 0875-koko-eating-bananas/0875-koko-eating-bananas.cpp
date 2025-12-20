class Solution {
public:

    bool canEatAll(vector<int>& piles, int h, int mid){
        int result = 0;
        for(auto &it: piles){
            result += it/mid;
            //ts
            if(it%mid != 0){
                result++;
            }
        }
        return result <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(begin(piles), end(piles));

        while(s<e){
            int mid = s+(e-s)/2;
            if(canEatAll(piles, h, mid)){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }
        return s;
    }
};