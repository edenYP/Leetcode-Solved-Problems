class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
            if(t.size() != s.size()){return false;};
        for(int i = 0; i < t.size(); i++){smap[s[i]]++; tmap[t[i]]++;};
        return tmap == smap;
    }
};