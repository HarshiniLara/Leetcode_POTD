class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_set<int> temp;
        for(int i:nums) {
            freq[i]++;
            if(freq[i]>1)
            temp.erase(i);
            else 
            temp.insert(i);
        }
        vector<int> res(temp.begin(), temp.end());
        return res;
    }
};
