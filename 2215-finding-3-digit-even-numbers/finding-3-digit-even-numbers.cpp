class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& a) {
        int n = a.size();
        set<int> st;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (i != j && i != k && j != k &&
                        a[i] != 0 && a[k] % 2 == 0) {

                        st.insert(a[i] * 100 + a[j] * 10 + a[k]);
                    }
                }
            }
        }

        vector<int> ans;

        for (int x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};