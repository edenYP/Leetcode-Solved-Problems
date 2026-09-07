class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> unmap;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            unmap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            if ((unmap.find(target - nums[i]) != unmap.end() && unmap[target - nums[i]] != i)) {
                result.push_back(i);

                result.push_back(unmap[target - nums[i]]);
                break;
            }
        }
        return result;
    }
};