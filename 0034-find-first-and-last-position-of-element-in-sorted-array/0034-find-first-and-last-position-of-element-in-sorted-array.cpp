class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        bool found = false;
        int low = 0; 
        int high = nums.size() - 1;
        int first;
        int last;

        while(low <= high){

          int pivot = low + (high - low)/2;

            if(nums[pivot] == target){
                first = pivot;
                high = pivot - 1;
                found = true;
            }


            else if(nums[pivot] > target){
                high = pivot - 1;
            }

            else{
                low = pivot + 1;
            }


        }
    if(found){
            low = 0;
            high = nums.size() - 1;


            while(low <= high){

              int pivot = low + (high - low)/2;

            if(nums[pivot] == target){
                last = pivot;
                low = pivot + 1;
            }

            else if(nums[pivot] > target){
                high = pivot - 1;
            }

            else{
                low = pivot + 1;
            }


        }

        return {first, last};
    }



        return {-1, -1};

    }
};