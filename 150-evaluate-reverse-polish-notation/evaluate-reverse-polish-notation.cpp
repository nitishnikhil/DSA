class Solution {
public:
    int solve(int a,int b, string Operator){
        if(Operator=="+")
        return a + b;

        if(Operator=="-")
        return a-b;

        if(Operator=="*")
        return a * b;

        if(Operator=="/")
        return a/b;
    
    return -1;
    }
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> st;
        for(string token:tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int result= solve(top2,top1,token);
                st.push(result);
            }
            else
            st.push(stoi(token));
        }
        int ans=st.top();
        st.pop();
        return ans;
    }
};