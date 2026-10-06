class Solution {
public:

    void merge(vector<int>& num, vector<int>& leftsub, vector<int>& rightsub, int low){
        int left = 0; 
        int right = 0;
        int count = low;

        while(left < leftsub.size() && right < rightsub.size()){

            if(leftsub[left] <= rightsub[right]){
                num[count++] = leftsub[left++];
            }

            else if(rightsub[right] < leftsub[left]){
                num[count++] = rightsub[right++];
            }
        }

        while(left < leftsub.size()){
            num[count++] = leftsub[left++];
        }

        while(right < rightsub.size()){
            num[count++] = rightsub[right++];
        }

    }


    void mergesort(vector<int>& nums, int low, int high){

        if(low >= high){
            return;
        }


        int mid = low + (high - low)/2;


        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);

        vector<int> leftsub;
        vector<int> rightsub;

        for(int i = low; i <= mid; i++){
            leftsub.push_back(nums[i]);
        }

        for(int i = mid + 1; i <= high; i++){
            rightsub.push_back(nums[i]);
        }

        merge(nums, leftsub, rightsub, low);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};