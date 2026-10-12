class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1;
        int candidate2;
        int fq1 = 0;
        int fq2 = 0;
        int n = nums.size();

        for(int i = 0; i < nums.size(); i++){
            // increment
                if(nums[i] == candidate1){
                    fq1++;
                    continue;
                }
                else if(nums[i] == candidate2){
                    fq2++;
                    continue;
                }

            // initialize
                if(fq1 == 0 || fq2 == 0){
                    if(fq1 == 0){
                        candidate1 = nums[i];
                        fq1++;
                        continue;
                    }
                    else if(candidate1 != nums[i]){
                        candidate2 = nums[i];
                        fq2++;
                        continue;
                    }}


            // decrement
                else{
                    fq1--;
                    fq2--;
                }
            }
            
            
            fq1 = 0;
            fq2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == candidate1){
                fq1++;
            }
            else if(nums[i] == candidate2){
                fq2++;
            }
        }
        
            


        if(fq1 > n/3 && fq2 > n/3){
            return {candidate1, candidate2};
        }
        else if(fq1 > n/3){
            return {candidate1};
        }
        else if(fq2 > n/3){
            return {candidate2};
        }
        else{
            return {};
        }
    }
};