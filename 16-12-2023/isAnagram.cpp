class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        vector<int> cnt(26, 0);
        for(char c:s)
        cnt[c-'a']++;

        for(char c:t) {
            if(cnt[c-'a']<1)
            return false;
            cnt[c-'a']--;
        }
        for(int i:cnt) {
            if(i!=0)
            return false;
        }
        return true;
    }
};
