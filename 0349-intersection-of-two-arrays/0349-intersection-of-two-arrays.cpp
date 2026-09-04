class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> compare;

        std::vector<int> result;

        for(int num : nums1){
            compare.insert(num);
        }

        for(int num : nums2){
            if(compare.find(num) != compare.end()){
                   result.push_back(num);
                   compare.erase(num);
            }
            else{
                continue;
            }
        }
        return result;
    }    
};