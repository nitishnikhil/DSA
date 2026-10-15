class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2)
        return n;
       //Buttom up approach with O(0) space 
       
       int a=1;
       int b=2;
       int c;
        for(int i=3; i<=n; i++){
          c=a+b;
          int temp=b;
          b=c;
          a=temp;
          
        }
        return c;
    }
};