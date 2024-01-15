class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> temp;
        vector<vector<int>> result(2);
        for(vector match:matches) {
            temp[match[1]]++;
            if(temp[match[0]]==0) continue;
        }
        for(auto it=temp.begin(); it!=temp.end(); ++it) {
            if(temp[it->first]==0) result[0].push_back(it->first);
            else if(temp[it->first]==1) result[1].push_back(it->first);
        }
        sort(result[0].begin(), result[0].end());
        sort(result[1].begin(), result[1].end());
        return result;
    }
};
