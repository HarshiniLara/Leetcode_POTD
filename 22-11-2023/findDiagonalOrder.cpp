class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> d;
        for(int i=nums.size()-1; i>=0; i--) {
            for(int j=0; j<nums[i].size(); j++) {
                d[i+j].push_back(nums[i][j]);
            }
        }
        int temp = 0;
        vector<int> res;
        while(d.find(temp)!=d.end()) {
            for(int i:d[temp])
            res.push_back(i);
            temp++;
        }
        return res;
    }
};
