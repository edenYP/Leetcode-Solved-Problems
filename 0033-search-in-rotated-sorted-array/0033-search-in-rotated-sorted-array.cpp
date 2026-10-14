class Solution {
public:
int search(std::vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    // base condition

    if(nums.size() == 1){
        if(nums[0] == target){
            return 0;
        }
        return -1;
    }


    int mid = low + (high - low)/2;
    
    // checks

    while(low < high){

        mid = low + (high - low)/2;

        // base condition:
        if(nums[mid] == target){
            return mid;
        }


        // left sorted:

        if(nums[mid] >= nums[low]){

            if(target >= nums[low] && target < nums[mid]){
                high = mid - 1;
                continue;
            }
            else{
                low = mid + 1;
                continue;
            }
        }


        // right sorted:

        else if(nums[mid] <= nums[high]){

            if(target > nums[mid] && target <= nums[high]){
                low = mid + 1;
                continue;
            }
            else{
                high = mid - 1;
            }
        }

    }

    
    if(nums[low] == target){
        return low;
    }



    return -1;
}
};
