class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> freq(nums.size()+1, 0);
        for(int i:nums) {
           freq[i]++;
           if(freq[i]>res.size()) res.push_back({});
           res[freq[i]-1].push_back(i);
        }
        return res;
    }
};
