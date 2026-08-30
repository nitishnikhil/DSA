class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
int n=nums.size();
        if(n==1)
        return 1;
        int minm=nums[0];
        int maxm=nums[0];
        int minidx=0;
        int maxidx=0;
        for(int i=1; i<n; i++){
            if(minm>nums[i]){
                minm=nums[i];
                minidx=i;
            }
            
            if(maxm<nums[i]){
                 maxm=nums[i];
                 maxidx=i;
            } 
        }
        // Smaller and larger index
        int first = min(minidx, maxidx);
        int second = max(minidx, maxidx);

        // Case 1: Both from left
        int left = second + 1;

        // Case 2: Both from right
        int right = n - first;

        // Case 3: One from left and one from right
        int leftRight = (first + 1) + (n - second);

        // Find minimum manually
        int ans = left;

        if (right < ans) {
            ans = right;
        }

        if (leftRight < ans) {
            ans = leftRight;
        }

        return ans;
    }
};