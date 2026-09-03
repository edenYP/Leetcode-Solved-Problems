class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    std::unordered_set<int> check;

      for(const auto num : nums){
        if(check.find(num) != check.end()){
          return true;
        }
        else if(check.find(num) == check.end()){
          check.insert(num);
        }
        
      }


      return false;




        }
    };