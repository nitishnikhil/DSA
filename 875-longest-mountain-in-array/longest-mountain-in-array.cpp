class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int up=0;
        int ans=0;
        int down=0;
     
        //arr[0]=0;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){ //increasing order
                if(down>0){
                    up=0;
                    down=0;
                }
                up++;
            }
            else if(arr[i]<arr[i-1] && up>0){  //peak met
             down++;
             ans= max(ans, (up+down+1));
            }
            else{
                up=0;
                down=0;
            }
        }
        return ans;
    }
};
