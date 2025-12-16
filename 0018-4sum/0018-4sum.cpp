class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i<nums.size(); i++){
            if(i-1 >= 0 && nums[i-1] == nums[i]) continue;
            for(int j = i+1; j<nums.size();){
                int p = j+1;
                int q = nums.size()-1;

                while(p<q){

                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        //DONT FORGET THIS STEP
                        p++;
                        q--;

                        while(p<q && nums[p] == nums[p-1]) p++;
                    }
                    else if(sum > target){
                        q--;
                    }
                    else{
                        p++;
                    }
                }
                 j++;
                 while(j<nums.size() && nums[j] == nums[j-1]) j++;
            }
        }
        return ans;
    }
};