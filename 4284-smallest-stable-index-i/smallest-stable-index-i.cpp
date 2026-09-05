class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minElement(n);
        int minEle = nums[n - 1];
        minElement[n - 1] = minEle;

        // store minimun vale from last
        for (int i = n - 2; i >= 0; i--) {
            minEle = min(minEle, nums[i]);
            minElement[i] = minEle;
        }
        int maxEle = INT_MIN;
        for (int i = 0; i < n; i++){
            maxEle= max(maxEle, nums[i]);
            int minEle=minElement[i];
            if(maxEle-minEle <=k){
                return i;
            }
        }
    return -1;
    }
};