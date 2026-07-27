class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for (int k = 2; k <= nums.size(); ++k) {
            int sz = ans.size();

            for (int i = 0; i < sz; ++i) {
                vector<int>& c = ans[i];
                c.push_back(k);

                vector<int> prev = c;

                for (int j = c.size() - 1; j >= 1; --j) {
                    vector<int> c1 = prev;

                    swap(c1[j], c1[j - 1]);

                    prev = c1;
                    ans.push_back(c1);
                }
            }
        }

        for (int i = 0; i < ans.size(); ++i) {
            for (int j = 0; j < ans[i].size(); ++j) {
                ans[i][j] = nums[ans[i][j] - 1];
            }
        }

        return ans;
    }
};