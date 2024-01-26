#define mod 1000000007
class Solution {
public:
    vector<vector<vector<int>>> dp;
    int m, n;
    int solve(int i, int j, int maxMove) {
        if(i<0 || i==m ||j<0 || j==n) return 1;
        if(maxMove==0) return 0;
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove];
        return dp[i][j][maxMove] = ((solve(i+1, j, maxMove-1)+solve(i-1, j, maxMove-1))%mod
        +(solve(i, j+1, maxMove-1)+solve(i, j-1, maxMove-1))%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       this->m = m;
       this->n = n;

       dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector(maxMove+1, -1)));
       return solve(startRow, startColumn, maxMove);
    }
};
