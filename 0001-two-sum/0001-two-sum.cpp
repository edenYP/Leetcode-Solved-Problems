class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> unmap;

        for (int i = 0; i < nums.size(); i++) {
            int num1 = nums[i];
                int num2 = target - num1;

                if(unmap.find(num2) != unmap.end()){
                        return {unmap[num2], i};
                }

                unmap[num1] = i;
            }
            return {-1, 1};
        }
        
    };