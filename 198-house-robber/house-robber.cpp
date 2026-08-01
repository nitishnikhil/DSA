class Solution {
public:
    vector<int> dp = vector<int>(101, -1);
    int solve(vector<int>& nums, int i) {

        // Base case
        if (i >= nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int first = nums[i] + solve(nums, i + 2);
        int second = solve(nums, i + 1);

        return dp[i]=max(first, second);
    }

    int rob(vector<int>& nums) {
        return solve(nums, 0);
    }
};