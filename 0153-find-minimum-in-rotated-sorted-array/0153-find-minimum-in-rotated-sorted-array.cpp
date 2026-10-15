class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;

        // The array is already sorted.
        if (nums[l] < nums[h]) {
            return nums[l];
        }

        while (l < h - 1) {
            int m = l + (h - l) / 2;

            // Left side is sorted.
            if (nums[m] > nums[l]) {
                l = m;
                continue;
            }

            // Right side is sorted.
            else if (nums[m] < nums[h]) {
                h = m;
                continue;
            }
        }

        // Only two elements remain.
        return min(nums[l], nums[h]);
    }
};