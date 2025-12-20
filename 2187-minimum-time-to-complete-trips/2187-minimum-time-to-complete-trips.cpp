class Solution {
public:

    bool possible(vector<int>& time, long long mid, int totalTrips){
        long long result = 0;
        for(auto &it: time){
            result+= mid/it;
        }
        return (result >= totalTrips);

    }
    
    int mini(vector<int>& time){
        int min_element = INT_MAX;
        for(int i = 0; i<time.size(); i++){
            min_element = min(min_element, time[i]);
        }
        return min_element;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
   
        long long s = 1;
        long long e = (long long) mini(time) * totalTrips;

        while(s<e){
            long long mid = s+(e-s)/2;
            if(possible(time, mid, totalTrips)){
                e = mid;
            }
            else{
                s = mid+1;
            }

        }
        return s;
    }
};