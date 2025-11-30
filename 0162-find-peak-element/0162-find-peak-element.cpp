class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0; 
        int e = nums.size();
        int mid = s+(e-s)/2;
        while(s<e){
            
            if(mid+1 < nums.size() && nums[mid] < nums[mid+1]) s = mid+1;
            else e = mid;
            mid = s+(e-s)/2;
        }
        return mid;
    }
};