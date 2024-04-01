class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = s.length()-1, len = 0;
        while(s[start]==' ') {
            start--;
        }
        while(start>=0 && s[start]!=' '){
            len++;
            start--;
        }
        return len;
    }
};
