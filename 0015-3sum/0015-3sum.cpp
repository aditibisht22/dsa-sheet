class Solution {
public:

    void twoSum(vector<int> &nums, int target, int s, int e, vector<vector<int>> &ans){
        while(s<e){
            if(nums[s] + nums[e] == target){
                while(s+1 < e && nums[s] == nums[s+1]) s++;
                while(e-1 > s && nums[e] == nums[e-1]) e--;
                ans.push_back({-target, nums[s], nums[e]});
                s++;
                e--;
            }
            else if(nums[s] + nums[e] > target){
                e--;
            }
            else{
                s++;
            }

        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        //1. sort the vector
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        //2. find n and write 2sum
        for(int i = 0; i<nums.size(); i++){
            if(i-1 >= 0 && nums[i] == nums[i-1] ){
              continue;
            }
            int n1 = -nums[i];
            int s = i+1;
            int e = nums.size() -1;

            twoSum(nums, n1, s, e , ans);
        }
        return ans;
    }
};