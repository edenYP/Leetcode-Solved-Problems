class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
             std::unordered_map<int, int> check;
      
      for(int i = 0; i < nums.size(); i++){
        if(check.find(nums[i]) == check.end()){
          check[nums[i]] = check.count(nums[i]);
        }
        else if(check.find(nums[i]) != check.end()){
          return true;
        }


      }

      return false;




        }
    };