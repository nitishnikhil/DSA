class Solution { 
public: 
    vector<int> topKFrequent(vector<int>& nums, int k) { 
        
        vector<int> ans;
        
        sort(nums.begin(), nums.end()); 
        
        unordered_map<int, int> freq; 
        
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]] += 1;
        }
        
        vector<pair<int, int>> temp; 
        
        for(auto it : freq) {
            temp.push_back({it.second, it.first});
        }
        
        sort(temp.begin(), temp.end(), greater<pair<int,int>>());
        
        int i = 0;
        while(k > 0) {
            ans.push_back(temp[i].second);
            i++;
            k--;
        }
        
        return ans;
    }
};