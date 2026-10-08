class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

// two pointer approach.

        while(left < right){

            if(isalnum(s[left]) && isalnum(s[right])){
                if(tolower(s[left]) != tolower(s[right])){
                    return false;
                }

                left++;
                right--;
            }

            else if(isalnum(s[left])){
                right--;
            }
            else if(isalnum(s[right])){
                left++;
            }
            else{
                right--;
                left++;
            }
        }

        return true;
    }
};