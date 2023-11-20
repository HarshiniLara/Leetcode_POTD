class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;
        for(char ch:{'G', 'P', 'M'}) {
            int f = 0;
            for(int i=garbage.size()-1; i>=0; i--) {
                for(char c:garbage[i]) {
                    if(c==ch){
                        time++;
                        if(f==0)
                        f = 1;
                    }
                }
                if(i!=0 && f==1)
                time+=travel[i-1];
            }
        }
        return time;
    }
};
