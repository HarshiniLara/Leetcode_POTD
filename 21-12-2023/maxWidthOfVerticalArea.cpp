class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> p;
        for(int i=0; i<points.size(); i++)
        p.push_back(points[i][0]);
        sort(p.begin(), p.end());
        int m = 0;
        for(int i=1; i<p.size(); i++)
        m = max(m, p[i]-p[i-1]);
        return m;
    }
};
