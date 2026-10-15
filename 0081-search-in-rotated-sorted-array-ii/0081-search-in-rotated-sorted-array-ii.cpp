#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;


        // loop
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // base condition

            if (nums[mid] == target) {
                return true;
            }

            // Duplicates edge case
            if (nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }

            // Right half is sorted.
            if (nums[mid] <= nums[high]) {

                if (target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                } 

                else{
                    high = mid - 1;
                }
            }

            // Left half is sorted.
            else{
                if(target >= nums[low] && target < nums[mid]){high = mid - 1;}
                else{low = mid + 1;}
                }
        }

        return false;
    }
};
