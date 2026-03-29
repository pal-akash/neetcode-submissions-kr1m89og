class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;
        for(string str: strs){
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            temp[sortedStr].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto& pair: temp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
