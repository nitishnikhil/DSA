/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:   
    vector<string> ans;

    void dfs(TreeNode* root , vector<int> &A) {
        A.push_back(root -> val);

        if((root -> left) && (root -> right)) {
            dfs(root -> left , A);
            dfs(root -> right , A);
        } else if(root -> left) {
            dfs(root -> left , A);
        } else if(root -> right) {
            dfs(root -> right , A);
        } else {
           string t = "";

           for(int i = 0; i < A.size(); ++i) {
               int X = A[i];

               if(A[i] == 0) {
                   t.push_back('0'); 
                   t.push_back('-'); 
                   t.push_back('>'); 
                   continue;
               }
 
               string x = "";

               X = abs(A[i]);

               while(X > 0) {
                  x +=('0' + (X % 10));

                  X /= 10;
               }

               reverse(x.begin() , x.end());
               
              if(A[i] < 0) 
                   t.push_back('-');

               for(int j = 0; j < x.size(); ++j) 
                   t.push_back(x[j]);

               t.push_back('-');
               t.push_back('>');
           }

           t.pop_back();
           t.pop_back();
        
           ans.push_back(t);
        }

        A.pop_back();
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)
        return vector<string>({});

        vector<int> A;
        
        dfs(root ,  A );
        
        return ans;
    }
};