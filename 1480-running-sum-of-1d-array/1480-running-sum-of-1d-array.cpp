class Solution {
public:
    std::vector<int> runningSum(vector<int>& nums) {
        std::vector<int> result;
        int prevsum = 0;
        for(int i = 0; i < nums.size(); i++){
            prevsum+= nums[i];
            result.push_back(prevsum);
        }   
        return result;
    }
};


