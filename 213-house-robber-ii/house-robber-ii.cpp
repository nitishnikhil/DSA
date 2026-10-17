class Solution {
public:
    vector<int> dp;
    int solve(vector<int>&nums, int i,int n){
      if(i>n)
      return 0;
      if(dp[i] !=-1)
      return dp[i];

      int take1st=nums[i]+solve(nums, i+2,n);
      int skip1st=solve(nums, i+1,n);
      return dp[i]=max(take1st, skip1st);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        if(n==2)
        return max(nums[0], nums[1]);
         dp.assign(n+1, -1);
       int take1st= solve(nums, 0,n-2);
        dp.assign(n+1, -1);
       int take0th=solve(nums, 1, n-1);
       return max(take1st, take0th);
    }
};