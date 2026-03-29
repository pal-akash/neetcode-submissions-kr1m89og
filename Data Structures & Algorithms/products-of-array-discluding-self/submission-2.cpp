class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeroCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeroCount++;
            } else{
                prod *= nums[i];
            }
        }
        if(zeroCount > 1) {
            return vector<int>(nums.size(), 0);
        }
        vector<int> ans(nums.size());
        for(size_t i=0; i<nums.size(); i++){
            if(zeroCount > 0){
                ans[i] = nums[i] == 0 ? prod : 0;
            }else {
                ans[i] = prod/nums[i];
            }
        }
        return ans;
    }
};
