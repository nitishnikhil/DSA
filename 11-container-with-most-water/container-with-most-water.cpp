class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxarea=INT_MIN;
        while(i<j){
            int base=j-i;
            int ht=min(height[i],height[j]);
            maxarea=max(maxarea,(base*ht));
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return maxarea;
    }
};