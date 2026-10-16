class Solution {
public:
    int solve(vector<int>&nums, int i,int n, vector<int>&dp){
      if(i>n-1)
      return 0;
      if(dp[i] !=-1)
      return dp[i];

      int take1st=nums[i]+solve(nums, i+2,n,dp);
      int skip1st=solve(nums, i+1,n,dp);
      return dp[i]=max(take1st, skip1st);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1, -1);
        return solve(nums, 0,n,dp);
    }
};