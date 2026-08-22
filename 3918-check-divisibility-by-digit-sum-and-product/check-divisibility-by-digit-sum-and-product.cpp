class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int temp=n;
        int temp1=n;
        if(n==0){
        return true;
        }
        while(temp>0){
            int rem=temp%10;   
            sum =(sum+rem);
            temp /=10;
        }
        cout<<"sum="<<sum<<endl;
        while(temp1>0){
            int rem=temp1%10;
            prod *=rem;
            temp1 /=10;   
        }
        int result=sum+prod;
        if(n%result==0)
        return true;

        return false;
    }
};