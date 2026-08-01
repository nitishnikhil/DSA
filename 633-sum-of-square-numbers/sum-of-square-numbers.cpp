class Solution {
public:
    bool judgeSquareSum(int c) {
        long long sum=0;
        if(c==0)
        return true;
        long long i=0, j=1;
        j=sqrt(c);
        
        while(i<=j){
            sum=(i*i)+(j*j) ;
            if(sum==c){
              return true;
            }
            if(sum<c)
            i++;
            else
            j--;
            //cout<<"i="<<i<<",j="<<j<<endl;
        }

        return false;
    }
};