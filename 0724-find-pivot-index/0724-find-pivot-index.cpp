class Solution {
public:
    int pivotIndex(vector<int>& nums) {
            int totalsum = 0;
            for(int i = 0; i < nums.size(); i++){
                totalsum+= nums[i];
            }  
            int reversesum = 0;

            for(int i = 0; i < nums.size(); i++){
                totalsum-= nums[i];

                    if(totalsum == reversesum){
                        return i;
                    }
                    else{
                        reversesum+= nums[i];
                        continue;
                    }

            }
            return -1;


    }
};