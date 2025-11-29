class Solution {
public:

    int pivotIndex(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;

         int mid = s+(e-s)/2;
        while(s<=e){
           //single element
            if(s==e) return s;

            if(mid+1 < nums.size() && nums[mid] > nums[mid+1]) return mid;
            else if(mid-1 >= 0 && nums[mid] < nums[mid-1]) return mid-1;
            else if(nums[0] > nums[mid]) e = mid-1;
            else s = mid+1;

            mid = s+(e-s)/2;
        }
        return -1;
    }

    int binary(vector<int>& nums,int s, int e, int target){
       
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) s = mid+1;
            else e = mid-1;
            mid = s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = pivotIndex(nums);
        //if pivot se phle target
        if(target >= nums[0] && target <= nums[pivot]){
                  return binary(nums,0, pivot, target);
         
        }
        else
      
            return binary(nums, pivot+1, nums.size()-1, target);

    }
};