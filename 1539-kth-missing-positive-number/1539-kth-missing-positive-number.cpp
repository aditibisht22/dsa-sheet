class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        //2. brute force
        int i = 0;
        int num = 1;
        
        while(i < arr.size() && k > 0){
            if(arr[i] == num) i++;
            else k--;

            num++;
        }

        while(k--){
            num++;
        }
        return num-1;
    }
};