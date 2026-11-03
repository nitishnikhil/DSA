class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxval=nums[0];
        for(int i=1; i<n; i++){
           if(maxval<nums[i])
           maxval=nums[i];
        }
        int ans=0;
        for(int i=0; i<n; i++){
            int diff=maxval-nums[i];
            ans +=diff;

        }
        return ans;
    }
};