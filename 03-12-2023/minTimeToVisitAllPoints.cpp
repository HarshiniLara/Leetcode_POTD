class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for(int i = 0; i<points.size()-1; i++) {
            int x = points[i][0];
            int y = points[i][1];
            int x1 = points[i+1][0];
            int y1 = points[i+1][1];
            
            int dx = abs(x1 - x);
            int dy = abs(y1 - y);
            time+=(min(dx, dy)+abs(dx - dy));
        }
        return time;
    }
};
