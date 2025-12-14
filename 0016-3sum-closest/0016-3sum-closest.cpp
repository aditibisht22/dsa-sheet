class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //using two-pointer

        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
            int ans = -1;

        for(int i = 0; i<nums.size(); i++){
            int s = i+1;
            int e = nums.size()-1;
            

            while(s<e){
                int sum = nums[i] + nums[s] + nums[e];
                if(abs(sum-target) < diff){
                diff = abs(sum-target);
                ans = sum;}           

                if(sum > target){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return ans;
    }
};