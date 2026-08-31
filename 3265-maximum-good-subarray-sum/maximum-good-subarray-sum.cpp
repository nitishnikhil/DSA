class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        // Prefix Sum array
        vector<long long> prefix(n+1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        //Store value min prefix sum
        unordered_map<long long, long long> mp;

        long long ans = LLONG_MIN;
        //valid starting values
        for (int i = 0; i < n; i++) {

            int num = nums[i];
            // num - k
            if (mp.count(num - k)) {
                ans = max(ans, prefix[i + 1] - mp[num - k]);
            }
            // num + k
            if (mp.count(num + k)) {
                ans = max(ans, prefix[i + 1] - mp[num + k]);
            }
            //current number
            if (!mp.count(num)) {
                mp[num] = prefix[i];
            }
            else {
                mp[num] = min(mp[num], prefix[i]);
            }
        }
        if (ans == LLONG_MIN)
            return 0;

        return ans;
    }
};