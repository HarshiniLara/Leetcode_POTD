class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> res;
        unordered_map<string, int> temp;
        int j = 0;
        for(int i=0; i<n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if(temp.find(s)==temp.end()) {
                temp[s] = j;
                res.push_back({});
                j++;
            } 
            res[temp[s]].push_back(strs[i]);
        }
        return res;
    };
};
