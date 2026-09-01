class Solution {
public:
    int distance(vector<int>& p1, vector<int>& p2){
        int dis=(p2[0]-p1[0])*(p2[0]-p1[0]) + (p2[1]-p1[1])*(p2[1]-p1[1]);
        return dis;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> side={
            distance(p1,p2),
            distance(p1,p3),
            distance(p1,p4),
            distance(p2,p3),
            distance(p2,p4),
            distance(p3,p4)
        };
        unordered_map<int,int> mp;
        for(int val:side){
           if(val==0)
           return false;
        }
        for(int val:side){
            mp[val] +=1;
        }
       for(auto val:mp){
        if(val.second==4 && mp.size()==2)
        return true;
       }
        
        // if(mp.size()==2)
        // return true;
        // else
        // return false;

        return false;
    }
};