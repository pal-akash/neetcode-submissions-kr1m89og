class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i =0, n = nums.size();
        while(i<n-1){
            int j = i+1;
            while(j<n){
                if(nums[i] == nums[j]){
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};