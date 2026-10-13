class Solution {
public:
int singleNonDuplicate(vector<int>& nums) {
int low = 0;
int high = nums.size() - 1;


// basecase:

if(nums.size() == 1){
    return nums[low];
}

while(low < high){
int mid = low + (high - low)/2;

// check next
    if(mid % 2 == 0){

        if(nums[mid] != nums[mid+1]){
            high = mid;
            continue;
        }

        else if(nums[mid] == nums[mid+1]){
            low = mid + 2;
            continue;
        }

    }


// check prev
    else if(mid % 2 == 1 && mid != 0){

        if(nums[mid] == nums[mid-1]){
            low = mid + 1;
            continue;
        }

        else if(nums[mid] != nums[mid-1]){
            high = mid;
            continue;
        }
    }
}

    return nums[low];
}

};
