class Solution {
public:
    bool halvesAreAlike(string s) {
        int l = 0, r = s.size()-1, lc = 0, rc = 0;
        while(l<r) {
            char cl = tolower(s[l]), cr = tolower(s[r]);
            if(cl=='a' || cl=='e' || cl=='i' || cl=='o' || cl=='u')
            lc++;
            if(cr=='a' || cr=='e' || cr=='i' || cr=='o' || cr=='u')
            rc++;
            l++; r--;
        }
        return lc==rc;
    }
};
