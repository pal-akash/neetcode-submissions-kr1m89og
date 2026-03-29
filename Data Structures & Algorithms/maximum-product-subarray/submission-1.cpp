class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int currMin = 1, currMax = 1;
        for(int num: nums){
            int temp = currMax * num;
            currMax = max(max(num * currMax, num * currMin), num);
            currMin = min(min(num * currMin, temp), num);
            res = max(currMax, res);
        }
        return res;
    }
};
