class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for(int i:arr) freq[i]++;

        vector<vector<int>> nums(arr.size(), vector<int>(2));
        vector<int> temp(2);
        for(auto it=freq.begin(); it!=freq.end(); ++it) {
            temp[0] = it->second; temp[1] = it->first;
            nums.push_back(temp);
        }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ind = n;
        for(int i=0; i<n; i++) {
            k-=nums[i][0];
            if(k<0) return ind;
            ind--;
        }
        return 0;
    }
};
