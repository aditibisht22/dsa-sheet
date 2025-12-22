class Solution {
public:

    bool possible(vector<int> &nums, int threshold, int mid){
        int sum= 0;

        for(auto &it: nums){
            sum+= ceil(double(it)/double(mid));
        }
        return (sum<=threshold);

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        int e = *max_element(begin(nums), end(nums));

        while(s<e){
            int mid = s+(e-s)/2;
            
            if(possible(nums, threshold, mid)){
                e = mid;
            }
            else{
                s = mid+1;
            }

        }
        return s;
    }
};