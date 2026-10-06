
class Solution {

    void merge(vector<int>& nums, vector<int>& temp, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        int count = low;


        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {
                temp[count++] = nums[left++];
            } 
            
            else {
                temp[count++] = nums[right++];
            }

        }

        while (left <= mid) {
            temp[count++] = nums[left++];
        }

        while (right <= high) {
            temp[count++] = nums[right++];
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i];
        }
    }

    void mergesort(vector<int>& nums, vector<int>& temp, int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        mergesort(nums, temp, low, mid);
        mergesort(nums, temp, mid + 1, high);

        merge(nums, temp, low, mid, high);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) return nums;

        vector<int> temp(nums.size());
        
        mergesort(nums, temp, 0, nums.size() - 1);

        return nums;
    }
};
