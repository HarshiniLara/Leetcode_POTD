class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        vector<int> rev;
        for(int i:nums) {
            int res = 0;
            while(i!=0) {
                res = (res*10)+(i%10);
                i/=10;
            }
            rev.push_back(res);
        }
        int cnt = 0, m = 1e9+7;
        unordered_map<int, int> temp;
        for(int i=0; i<nums.size(); i++) {
            int diff = nums[i]-rev[i];
            cnt = (cnt+temp[diff])%m;
            temp[diff]++;
        }
        return cnt;
    }
};
