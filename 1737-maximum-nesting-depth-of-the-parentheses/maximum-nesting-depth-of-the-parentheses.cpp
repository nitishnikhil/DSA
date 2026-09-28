class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxdepth = 0;
        int maxi = 0;
        for (char ch : s){
            if(ch=='('){
                maxi++;
                maxdepth = max(maxi, maxdepth);  //max paranthesis
            }
            else if(ch==')'){
                maxi--;
            }
        }
        return maxdepth;
    }
};