class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> temp(26, 0);
        for(char c:s)
        temp[c-'a']++;
        int op = 0;
        for(char c:t) {
            if(temp[c-'a']>0) temp[c-'a']--;
            else op++;
        }
        return op;
    }
};
