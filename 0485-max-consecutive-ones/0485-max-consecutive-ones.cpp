class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxstreak = 0;
       int currentstreak = 0; 

        for(const auto& num : nums){
            if(num == 1){
                currentstreak++;
            }
            else if(num == 0 && currentstreak > maxstreak){
                maxstreak = currentstreak;
                currentstreak = 0;
            }
            else{
                currentstreak = 0;
            }
        }
        if(currentstreak > maxstreak){maxstreak = currentstreak;};
        return maxstreak;
    }
};