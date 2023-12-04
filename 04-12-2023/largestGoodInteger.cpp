class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int max_len = INT_MIN;
        for(int i=0; i<=num.length()-3; i++) {
            string s = num.substr(i, 3);
            if(s[0]==s[1] && s[1]==s[2]) {
                if(stoi(s)>max_len){
                    max_len = stoi(s);
                    res = s;
                }
            }
        }
        return res;
    }
};
