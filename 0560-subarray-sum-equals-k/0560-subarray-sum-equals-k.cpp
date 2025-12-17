class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        //1. PS array
        vector<int>ps(nums.size(),0);

        ps[0] = nums[0];
        for(int i = 1; i<nums.size(); i++){
            ps[i] = ps[i-1] + nums[i];
        }

        //2. find the count
        //create hashmap
        unordered_map<int,int> m;
        for(int j = 0; j<nums.size(); j++){
            //1. count how many prefix sum equals k
            if(ps[j] == k) count++;

            //2. count how many val till j
            int val = ps[j] - k;
            if(m.find(val) != m.end()){
                count+= m[val];
            }

            //populate hashmap
            if(m.find(ps[j]) == m.end()){
                m[ps[j]] = 0;
            }
            m[ps[j]]++;
        }
        return count;
    }
};