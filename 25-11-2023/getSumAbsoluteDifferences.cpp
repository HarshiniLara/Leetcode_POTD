class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> res, prefix = {nums[0]};
        int n = nums.size();
        for(int i=1; i<n; i++)
        prefix.push_back(prefix[i-1]+nums[i]);

        for(int i=0; i<n; i++) {
            int l = i*nums[i]-prefix[i]+nums[i];
            int r = prefix[n-1]-prefix[i]-(n-i-1)*nums[i];
            res.push_back(l+r);
        }

        return res;
    }
};
