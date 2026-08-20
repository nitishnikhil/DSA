class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int count1 = 0, count2 = 0;
        int ans1 = 0, ans2 = 0;

        vector<int> ansarr;

        for (int i = 0; i < n; i++) {

            if (ans1 == nums[i])
                count1++;

            else if (ans2 == nums[i])
                count2++;

            else if (count1 == 0) {
                ans1 = nums[i];
                count1 = 1;
            }

            else if (count2 == 0) {
                ans2 = nums[i];
                count2 = 1;
            }

            else {
                count1--;
                count2--;
            }
        }

        int freq1 = 0;
        int freq2 = 0;

        for (int i = 0; i < n; i++) {
            if (ans1 == nums[i])
                freq1++;

            if (ans2 == nums[i])
                freq2++;
        }

        if (freq1 > n / 3)
            ansarr.push_back(ans1);

        if (freq2 > n / 3 && ans2 != ans1) // when all elements same in the array
            ansarr.push_back(ans2);

        return ansarr;
    }
};