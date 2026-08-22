class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st1;
        string ans1="";
        string ans2="";
        int n=s.size();
        int m=t.size();
        for(int i=0; i<n; i++){
            if(s[i] != '#')
            st.push(s[i]);
            else
                if(st.empty()){
                ;
                }
                else 
                st.pop();
        }
        for(int j=0; j<m; j++){
            if(t[j] != '#')
            st1.push(t[j]);
            else
                if(st1.empty()){
                ;
                }
                else 
                st1.pop();
        }
        while(!st.empty()){
            ans1 +=st.top();
            st.pop();
        }
         while(!st1.empty()){
            ans2 +=st1.top();
            st1.pop();
        }
        if(ans1==ans2)
        return true;

        return false;
    }
};
