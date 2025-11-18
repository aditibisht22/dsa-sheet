class Solution {
public:
    int missingNumber(vector<int>& nums) {
int real= 0;
        for(int i = 0; i<nums.size(); i++){
            real += nums[i];
        }
        int sum = nums.size()*(nums.size()+1)/2;

        return sum - real;
    }
};