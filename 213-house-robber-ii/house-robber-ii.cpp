class Solution {
public:
    vector<int> dp;

    int solve(vector<int>& nums, int i, int n){
        // FIX: Must check if 'i' has fully exceeded the subproblem boundary 'n'
        if(i > n)
            return 0;

        if(dp[i] != -1)
            return dp[i];
            
        int take = nums[i] + solve(nums, i + 2, n);
        int skip = solve(nums, i + 1, n);
        return dp[i] = max(take, skip); 
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        // Scenario 1: Rob from house 0 to n-2
        dp.assign(n + 1, -1);
        int take0th = solve(nums, 0, n - 2);
        
        // Scenario 2: Rob from house 1 to n-1
        dp.assign(n + 1, -1);
        int take1th = solve(nums, 1, n - 1);
        
        return max(take0th, take1th);
    }
};