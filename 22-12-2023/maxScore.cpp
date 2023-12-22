class Solution {
public:
    int maxScore(string s) {
        int m = 0, cnt0 = 0, cnt1 = 0;
        for(char c:s) {
            if(c=='1')
            cnt1++;
        }
        for(int i=0; i<s.length()-1; i++) {
            if(s[i]=='0')
            cnt0++;
            else
            cnt1--;
            m = max(m, cnt0+cnt1);
        }
        return m;
    }
};
