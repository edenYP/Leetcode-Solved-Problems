class Solution {
public:
    int missingNumber(vector<int>& nums) {

        std::unordered_set<int> set;

        for(const auto x : nums){
            set.insert(x);
        }

        int i = 0;

        for(i; i < nums.size(); i++){
            if(set.find(i) == set.end()){
                return i;
            }
        }

            // to check i when it's value is set.size();
        if(set.find(i) == set.end()){
            return i;
        }
        return -1;
    }
};