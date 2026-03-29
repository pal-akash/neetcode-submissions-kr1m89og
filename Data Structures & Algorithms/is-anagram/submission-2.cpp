class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> counts;
        for(char ch : s){
            counts[ch] += 1;
        }
        for(char ch : t){
            counts[ch] -= 1;
        }
        for(auto& pair: counts){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
