class Solution {
public: 
    int n;
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        n = jobDifficulty.size();
        if(d>n) return -1;
        vector<vector<int>> dp(n, vector<int>(d+1, -1));
        return solve(0, d, jobDifficulty, dp);
        
    }

    int solve(int i, int d, const vector<int>& jobDiff, vector<vector<int>>& dp) {
        if(d==1) {
            int m = 0;
            for(int j=i; j<n; j++)
            m = max(m, jobDiff[j]);
            return m;
        }
        if(dp[i][d]!=-1)
        return dp[i][d];
        int res = INT_MAX, maxVal = 0;
        for(int j=i; j<=n-d; j++) {
            maxVal = max(maxVal, jobDiff[j]);
            res = min(res, maxVal+solve(j+1, d-1, jobDiff, dp));
        }
        return dp[i][d] = res;
    }
};
