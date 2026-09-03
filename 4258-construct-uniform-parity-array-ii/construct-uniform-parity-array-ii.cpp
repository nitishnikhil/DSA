class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int minm= *min_element(begin(nums1),end(nums1));
        if(minm%2==1)
        return true;
        for(int i=0; i<n; i++){
            if(nums1[i]%2==1)
            return false;
        }
        return true;
    }
};