class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> temp;
        string res = "";
        for(char c:s) temp[c]++;
        for(char c:order) {
            while(temp.find(c)!=temp.end() && temp[c]>0) {
                res+=c;
                temp[c]--;
            }
        }
        for(auto it=temp.begin(); it!=temp.end(); ++it) {
            while(temp[it->first]>0) {
                res+=it->first;
                temp[it->first]--;
            }
        }
        return res;
    }
};
