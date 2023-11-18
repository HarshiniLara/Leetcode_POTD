class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, res = 0;
        long curr = 0;
        for(int r=0; r<nums.size(); r++) {
            long target = nums[r];
            curr+=target;
            while(target*(r-l+1)-curr>k) {
                curr-=nums[l];
                l++;
            }
            res = max(res, (r-l+1));
        }
        return res;
    }
};
