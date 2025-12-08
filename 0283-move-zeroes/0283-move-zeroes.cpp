class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int a =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                nums[a] = nums[i];
                a++;
            }
            

        }
        int j= n-1;
        while(count--){
            nums[j] = 0;
            j--;
        }
    }
};