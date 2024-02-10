class Solution {
public:
    bool palindrome(string s) {
        int l = 0, r = s.length()-1;
        while(l<r) {
            if(s[l]!=s[r])
            return false;
            l++;
            r--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i=0; i<s.length(); i++) {
            for(int j=i; j<s.length(); j++) {
                if(palindrome(s.substr(i, j-i+1)))
                count++;
            }
        }
        return count;
    }
};
