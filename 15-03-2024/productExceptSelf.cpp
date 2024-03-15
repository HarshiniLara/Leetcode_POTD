class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, prod1 = 1, cnt = 0;
        vector<int> ans(nums.size(), 0);
        for(int i:nums){
            if(i==0)
            cnt++;
            prod*=i;
            if(i!=0)
            prod1*=i;
        }
        if(cnt>1)
        return ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) 
            ans[i] = prod/nums[i];
            else
            ans[i] = prod1;
        }
        return ans;
    }
};
