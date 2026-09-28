class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

// calculate sum of n natural nums
        int calculatedsum = n*(n+1)/2;

        int actualsum = 0;
        for(int i = 0; i < n; i++){
            actualsum+= nums[i];
        }
        return (calculatedsum-actualsum);
    }
};