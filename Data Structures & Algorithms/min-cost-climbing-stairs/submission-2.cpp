class Solution {
private: 
    vector<int> memo;
    int f(int n, vector<int>& cost, vector<int>& memo){
        if(n<=1) return 0;
        if(memo[n] != -1) return memo[n];
        return memo[n] = min((cost[n-1] + f(n-1, cost, memo)), (cost[n-2] + f(n-2, cost, memo)));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> memo(n + 1, -1);
        return f(n, cost, memo);
    }
};
