class Solution {
public:
    vector<vector<int>> memo;
    int mod = 1e9+7;
    vector<vector<int>> jump = {{4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {}, {0,1, 7}, {2, 6}, {1, 3} ,{2, 4}};
    int dp(int rem, int curr) {
        if(rem==0)
        return 1;

        if(memo[rem][curr]!=0)
        return memo[rem][curr];

        int ans = 0;
        for(int i:jump[curr])
        ans = (ans+dp(rem-1, i))%mod;

        memo[rem][curr] = ans;
        return ans;
    }
    int knightDialer(int n) {
        int res = 0;
        memo = vector(n+1, vector<int>(10, 0));
        for(int i=0; i<10; i++) 
        res = (res+(dp(n-1, i)))%mod;

        return res;
    }
};
