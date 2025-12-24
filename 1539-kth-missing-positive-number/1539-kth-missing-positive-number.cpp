class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        //1. brute force
        
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] <= k) k++;
            else break;
        }

        return k;
    }
};