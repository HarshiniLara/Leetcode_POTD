class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int max_len = -1;
        unordered_map<char, int> ind;
        for(int i=0; i<s.length(); i++) {
            if(ind.find(s[i])!=ind.end())
            max_len = max(max_len, i-(ind[s[i]])-1);
            else
            ind[s[i]] = i;
        }
        return max_len;
    }
};
