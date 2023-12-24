class Solution {
public:
    int minOperations(string s) {
        int l1 = 0, l2 = 0;
        for(int i=0; i<s.length(); i++) {
            if(i%2==0) {
                if(s[i]!='0')
                l1++;
                else
                l2++;
            }
            else {
                if(s[i]!='1')
                l1++;
                else
                l2++;
            }
        }
        return min(l1, l2);
    }
};
