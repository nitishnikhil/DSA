class Solution {
public:
    string removeDuplicates(string s) {

         if(s.empty())
            return {};

        stack<char> st;
        string ans = {};
        int n = s.size();

        st.push(s[0]);

        for(int i = 1; i < n; i++) {

            if(st.empty()) {
                st.push(s[i]);
            }
            else if(st.top() != s[i]) {
                st.push(s[i]);
            }
            else {
                st.pop();
            }
        }

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};