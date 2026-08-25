class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());     //O(nlog(n))
        int val=k;
        for(int i=0; i<n; i++){
            if(val>nums[i]){

            }
            else if(val==nums[i]){
                val +=k;
            }
            else
            return val;
        }
        return val;
    }
};