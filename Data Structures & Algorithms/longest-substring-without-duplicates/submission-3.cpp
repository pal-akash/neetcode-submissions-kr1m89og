class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int j = 0, ans = 0;
       for(int i=0; i<s.size(); i++){
        if(mp.find(s[i]) != mp.end()){
            j = max(mp[s[i]] + 1, j);
        } 
        mp[s[i]] = i;
        ans = max(ans, i - j + 1);
       }
        return ans;
    }
};
