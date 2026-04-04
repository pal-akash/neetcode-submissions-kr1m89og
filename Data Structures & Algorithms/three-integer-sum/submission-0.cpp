class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 0) return {};
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        for(int i=0; i<nums.size(); i++){
            int l = i+1, r = nums.size()-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    result.insert({nums[i], nums[l] , nums[r]});
                    l++;
                    r--;
                } else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
        }
        vector<vector<int>> v(result.begin(), result.end());
        return v;
    }
};
