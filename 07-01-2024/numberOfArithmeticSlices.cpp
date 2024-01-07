class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()<3)
        return 0;
        vector<unordered_map<int, int>> dp(n);
        int res = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if((long)nums[i] - (long)nums[j] > INT_MAX || (long)nums[i] - (long)nums[j] < INT_MIN) continue;
                int diff = nums[i]-nums[j];
                dp[i][diff]++;
                if(dp[j].find(diff)!=dp[j].end()) {
                    dp[i][diff]+=dp[j][diff];
                    res+=dp[j][diff];
                }
            }
        }
        return res;
    }
};
