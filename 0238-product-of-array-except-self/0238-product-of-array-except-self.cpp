class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
int currentproduct = 1;
int zerocount = 0;

for(int i = 0; i < nums.size(); i++){
    if(nums[i] == 0){
        zerocount++;
        continue;
    }
    currentproduct*= nums[i];
}

int temp;

for(int i = 0; i < nums.size(); i++){
    if(nums[i] == 0 && zerocount == 1){
        nums[i] = currentproduct;
    }
    else if(nums[i] == 0 && zerocount > 1){
        nums[i] = 0;
    }
    else if(zerocount == 0){
        temp = currentproduct/nums[i];
        nums[i] = temp;
    }
    else{
        nums[i] = 0;
    }
}


return nums;
    }
};