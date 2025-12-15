class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //1. sort the array so we don't have to check arr[i][0]
        sort(intervals.begin(), intervals.end());

        //2. logic
        vector<vector<int>> ans;
        for(int i = 0; i<intervals.size(); i++){
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};