class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> temp(nums.size(), 0);
        for(int i:nums)
        temp[i-1]++;
        int target, repeated;
        for(int i=0; i<nums.size(); i++) {
            if(temp[i]==2) repeated = i+1;
            if(temp[i]==0) target = i+1;
        }
        return {repeated, target};
    }
};
