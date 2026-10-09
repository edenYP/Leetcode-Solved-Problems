class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int left = 0;
        int right = 1;

        int maxsum = nums[0];
        int currentsum = nums[0];

        for(right; right < nums.size(); right++){

           if(currentsum < 0 && currentsum + nums[right] < nums[right]){
            currentsum = nums[right];
            left = right;
           } 
            else{
                currentsum+= nums[right];
            }


            if(currentsum > maxsum){
                maxsum = currentsum;
            }           

        }
        return maxsum;
    }
};