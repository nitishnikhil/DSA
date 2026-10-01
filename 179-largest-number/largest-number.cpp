class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto MyLambda = [](int a, int b) {
            string s1 = to_string(a);
            string s2 = to_string(b);
            return s1 + s2 > s2 + s1;
        };

        sort(nums.begin(), nums.end(), MyLambda);

        if (nums[0] == 0) {
            return "0";
        }
        string ans = "";
        for (int i : nums) {
            ans += to_string(i);
        }
        return ans;
    }
};