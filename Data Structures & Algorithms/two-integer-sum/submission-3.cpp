class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size(), i=0;
        // vector<int> ans;
        // while(i<n-1){
        //     int j = i+1;
        //     while(j<n){
        //         if(nums[i] + nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        // return ans;

        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(mp.count(diff)){
                return {mp[diff], i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
