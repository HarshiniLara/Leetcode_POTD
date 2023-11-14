class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> l(26);
        vector<int> r(26);
        unordered_set<string> uniqueSeq;

        for(int i=0; i<s.length(); i++)
        r[s[i]-'a']++;

        for(int i=0; i<s.length(); i++) {
            r[s[i]-'a']--;
            for(int j=0; j<26; j++) {
                if(l[j]>0 && r[j]>0) {
                    string temp = "";
                    char ch = j+'a';
                    temp+=ch;
                    temp+=s[i];
                    temp+=ch;
                    uniqueSeq.insert(temp);
                }
            }
            l[s[i]-'a']++;
        }
        return uniqueSeq.size();
    }
};
