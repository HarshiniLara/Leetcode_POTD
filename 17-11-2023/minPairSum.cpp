class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size()-1;
        int max_pair = INT_MIN;
        while(l<r) {
            max_pair = max(max_pair, nums[l]+nums[r]);
            l++;
            r--;
        }
        return max_pair;
    }
};
