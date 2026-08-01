class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        const int inf = 1e9;
        sort(nums.begin() , nums.end());
        int n = nums.size();

        if(n == 1) 
           return 1;

        int prev = nums[0] - k;
        nums[0] = prev;

        for(int i = 1; i < n; ++i) {
            if(nums[i] - prev > k) {
                nums[i] = nums[i] - k;
                prev = nums[i];
            } else if(nums[i] - prev <= -k)  {

            }
            else {
                nums[i] = ++prev;
            }  
        }

        set<int> ans;

        for(int i = 0; i < n; ++i) {
            cout << nums[i] << " ";
            ans.insert(nums[i]);   
        }    

        return ans.size();    
    }; 
};