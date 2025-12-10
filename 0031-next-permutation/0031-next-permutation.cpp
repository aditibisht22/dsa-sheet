class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();
        //1. find the pivot
        for(int i = n-1; i>=0; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }

        //if no pivot: means no next permutation then sort in asc, so just reverse it
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //2. swap 
        for(int i = n-1; i>pivot; i--){
            if(nums[pivot] < nums[i]){
                swap(nums[pivot], nums[i]);
                break;
            }
        }

        //3. reverse after pivot
        int i = pivot+1;
        int j = n-1;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};