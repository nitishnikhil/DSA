class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> minsell(n);
        minsell[0]=prices[0];
        for(int i=1; i<n; i++){
         if(minsell[i-1]<prices[i]){
            minsell[i]=minsell[i-1];
         }
         else{
            minsell[i]=prices[i];
         }
        }
        int profit=0;
        int ans=INT_MIN;
        for(int i=0; i<n; i++){
            profit=prices[i]-minsell[i];
            ans=max(profit,ans);
            //cout<<minsell[i]<<",";
        }
        return ans;
    }
};