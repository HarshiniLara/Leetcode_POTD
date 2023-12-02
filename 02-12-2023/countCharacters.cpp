class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        vector<int> cnt(26, 0);
        for(string s:words) {
            int flag = 0;
            for(char c:chars)
            cnt[c-'a']++;
            for(char c:s) {
                if(cnt[c-'a']<=0) {
                    flag = 1;
                    break;
                }
                cnt[c-'a']--;
            }
            if(flag==0)
            sum+=s.length();
            cnt = vector<int>(26, 0);
        }
        return sum;
    }
};
