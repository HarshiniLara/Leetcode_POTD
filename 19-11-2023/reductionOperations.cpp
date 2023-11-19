class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0,  temp = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]!=nums[i-1])
            temp++;
            cnt+=temp;
        }
        return cnt;
    }
};
