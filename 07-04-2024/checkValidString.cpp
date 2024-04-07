class Solution {
public:
    bool checkValidString(string s) {
        stack<int> openBrace, asterick;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            if(c=='(') openBrace.push(i);
            else if(c=='*') asterick.push(i);
            else {
                if(!openBrace.empty())
                openBrace.pop();
                else if(!asterick.empty())
                asterick.pop();
                else return false;
            }
        }

        while(!openBrace.empty() && !asterick.empty()) {
            if(openBrace.top()>asterick.top()) return false;
            openBrace.pop(); asterick.pop();
        }

        return openBrace.empty();
    }
};
