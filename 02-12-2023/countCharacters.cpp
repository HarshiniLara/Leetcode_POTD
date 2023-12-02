class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0, temp, flag;
        unordered_map<char, int> cnt;
        for(string s:words) {
            for(char ch:chars)
            cnt[ch]++;
            temp = 0;
            for(int j=0; j<s.length(); j++) {
                flag = 0;
                for(char ch: chars) {
                    if(s[j]==ch && cnt[ch]>0){
                    cnt[ch]--;
                    flag = 1;
                    break;
                    }
                }
                if(flag==0) {
                    temp = 1;
                    break;
                }
            }
            if(temp==0)
            sum+=s.length();
            cnt.clear();
        }
        return sum;
    }
};
