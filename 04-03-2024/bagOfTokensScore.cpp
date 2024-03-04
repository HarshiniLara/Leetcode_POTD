class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0, n = tokens.size();
        sort(tokens.begin(), tokens.end());
        int l = 0, r = n-1;
        while(l<=r) {
            if(power>=tokens[l]) {
                power-=tokens[l++];
                score++;
            }
            else if(l<r && score>0) {
                power+=tokens[r--];
                score--;
            }
            else return score;
        }
        return score;
    }
};
