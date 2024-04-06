class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st, st1;
        int cnt = 0;
        for(char c:s) {
            if(c=='(') st.push(c);
            else if(c==')' ) {
                if(!st.empty() && st.top()=='(') {
                    cnt++;
                    st.pop();
                }
            }
        }
        cout<<cnt<<"\n";
        string res = "";
        for(char c:s) {
            if(c=='(' && cnt>0) {
                st1.push(c);
                res+=c; cnt--;
            }
            else if(c==')') {
                if(!st1.empty() && st1.top()=='(') {
                    res+=c; st1.pop();
                }
            }
            else if(c>='a' && c<='z') res+=c;
        }
        return res;
    }
};
