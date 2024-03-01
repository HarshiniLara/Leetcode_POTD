class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int l = 0, r = 0, n = s.size();
        bool flag = false;
        while(r<n) {
            if(s[r]=='1' && flag==false) {
                s[r] = '0';
                flag = true;
            }
            if(s[r]=='1') {
                s[l] = '1'; s[r] = '0';
                l++;
            }
            r++;
        }
        s[n-1] = '1';
        return s;
    }
};
