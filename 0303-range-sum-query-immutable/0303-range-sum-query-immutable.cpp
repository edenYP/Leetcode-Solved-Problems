class NumArray {
public:
    vector<int> sum;

    NumArray(vector<int>& nums) {
        int total = 0;
        
        for(int i = 0; i < nums.size(); i++){
            total+= nums[i];
            sum.push_back(total);
        }

    }

    int sumRange(int left, int right) {

        if(left == 0){
            return sum[right];
        }



        return (sum[right] - sum[left - 1]);

    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */