class Solution {
public:
    int appendCharacters(string s, string t) {
        int curr = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]==t[curr] && curr<s.size()) curr++;
        }
        return t.size()-curr;
    }
};
