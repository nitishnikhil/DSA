class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minval=INT_MAX;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum +=nums[i];
            minval =min(minval, nums[i]);
        }
        return sum- nums.size()*minval;
    }
};