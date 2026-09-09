class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> compare;

        if(s.size() != t.size()){
            return false;
        }

        else{

            for(const char c : s){
                compare[c]++;
            }

            for(const char c : t){
                if(compare.find(c) == compare.end()){
                    return false;
                }
                else if(compare[c] == 0){
                    return false;
                }
                else{
                    compare[c]--;
                    continue;
                }
            }
        }

        return true;
    }
};