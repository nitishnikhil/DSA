class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        // 0 shift
        for(int i=1; i<n; i++){
            if(nums[k]==0){
                k++;
            }
            else if(nums[i]==0){
                swap(nums[i], nums[k]);
                k++;
            }
        }
        //1 shift
        int l=k;
        for(int i=l+1; i<n; i++){
            if(nums[k]==1){
                k++;
            }
            else if(nums[i]==1){
                swap(nums[i], nums[k]);
                k++;
            }
        }
        //2 shift
        // int m=k;
        // for(int i=m+1; i<n; i++){
        //     if(nums[k]==2){
        //         k++;
        //     }
        //     else if(nums[i]==2){
        //         swap(nums[i], nums[k]);
        //         k++;
        //     }
        // }
      
        
    }
};