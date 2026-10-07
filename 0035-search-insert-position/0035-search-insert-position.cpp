class Solution {
public:
    
    int searchInsert(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int pivot;

        while(low <= high){
            pivot = low + (high - low)/2;

            if(nums[pivot] == target){
                return pivot;
            }

            else if(nums[pivot] > target){
                high = pivot - 1;
            }

            else{
                low = pivot + 1;
            }

        }
        return low;
    }
};

