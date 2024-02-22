class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_set<int> a, b;
        vector<int> temp;
        int m = trust.size();
        for(int i=0; i<m; i++) {
            a.insert(trust[i][0]);
            b.insert(trust[i][1]);
        }
        for(auto it=b.begin(); it!=b.end(); ++it) {
            if(a.find(*it)==a.end()) 
            temp.push_back(*it);
        }
        if(temp.size()==0) return -1;

        for(int i:temp) {
            int cnt = 0;
            for(int j=0; j<m; j++) {
                if(trust[j][1]==i) cnt++;
            }
            if(cnt==n-1) return i;
        }
        return -1;
    }
};
