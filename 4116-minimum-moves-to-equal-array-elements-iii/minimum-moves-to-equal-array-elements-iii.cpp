class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxval=nums[0];
        int sum=maxval;
        for(int i=1; i<n; i++){
           if(maxval<nums[i])
           maxval=nums[i];
           sum +=nums[i];
        }
        int ans=0;
        // for(int i=0; i<n; i++){
        //     int diff=maxval-nums[i];
        //     ans +=diff;

        // }
        ans= n*maxval - sum;
        return ans;
    }
};