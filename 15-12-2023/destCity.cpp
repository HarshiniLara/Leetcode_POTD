class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // unordered_map<string, int> destn_city;
        // for(int i=0; i<paths.size(); i++) {
        //     destn_city[paths[i][0]]++;
        //     destn_city[paths[i][1]]++;
        // }
        // for(int i=0; i<paths.size(); i++) {
        //     if(destn_city[paths[i][1]]!=2)
        //     return paths[i][1];
        // }
        // return "";
        unordered_set<string> seen;
        for(int i=0; i<paths.size(); i++)
        seen.insert(paths[i][0]);
        for(int i=0; i<paths.size(); i++) {
            string dest = paths[i][1];
            if(seen.find(dest)==seen.end())
            return dest;
        }
        return "";
    }
};
