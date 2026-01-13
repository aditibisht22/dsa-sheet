class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),0);
        for(int i = 0; i<nums.size(); i++){
            int newIndex = (k+i)%nums.size();
            ans[newIndex] = nums[i];
        }
        nums = ans;
    }
};