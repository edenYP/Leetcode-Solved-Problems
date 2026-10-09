class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg = 0;
        double total = 0;


        for(int i = 0; i < k; i++){
            total+= nums[i];
        }

        int right = k;
        int left = 0;

        maxavg = (total/k);

        for(right; right < nums.size(); right++){

            total+= nums[right];
            total-= nums[left++];

            if((total/k) > maxavg){
                maxavg = (total/k);
            }


        }
        return maxavg;
    }
};