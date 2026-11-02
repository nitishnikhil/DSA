class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int mid= n/2;
        int midval=nums[mid];
        int countans=0;
        for(int i=0; i<n; i++){
            countans +=abs(nums[i]-midval);
        }
        return countans;
    }
};