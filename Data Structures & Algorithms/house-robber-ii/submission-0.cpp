class Solution {
private: 
    int houseRobberI(vector<int>& nums){
        if(nums.size() < 2) return nums[0];
        int n = nums.size();
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        } 
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
       if(nums.size() < 2) return nums[0];
       int n = nums.size();
       vector<int> skipLastHouse(n-1);
       vector<int> skipFirstHouse(n-1);
       for(int i=0; i<n-1; i++){
        skipLastHouse[i]=nums[i];
        skipFirstHouse[i]=nums[i+1];
       }
       int skippingLast = houseRobberI(skipLastHouse);
       int skippingFirst = houseRobberI(skipFirstHouse);
       return max(skippingLast, skippingFirst);
    }
};
