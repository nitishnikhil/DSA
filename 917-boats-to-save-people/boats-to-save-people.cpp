class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      
        sort(people.begin(), people.end());
        int n=people.size();
        int i=0;
        int j=n-1;
        int countboat=0;
        while(i<=j){  //two pointer
            int wt=people[i]+people[j];
            if(limit>=wt){
                countboat++;
                j--;
                i++;
            }
            else{
                j--;
                countboat++;
            }

        }
    return countboat;
    }
};