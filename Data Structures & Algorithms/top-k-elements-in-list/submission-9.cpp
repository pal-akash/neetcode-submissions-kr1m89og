class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int, int> freqs;
        for(int num: nums){
            freqs[num]++;
        };
        for(auto& pair: freqs){
            int freq = pair.second;
            bucket[freq].push_back(pair.first);
        }

        vector<int> ans(k);
        int count = 0;
        for(int i = bucket.size()-1; i>=0 && count < k; i--){
            if(!bucket[i].empty()){
                for(int integer: bucket[i]){
                    ans[count++] = integer;
                }
            }
        }
        return ans;
    }
};
