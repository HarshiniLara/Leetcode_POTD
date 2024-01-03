class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size(), temp = 0, res = 0;
        for(int i=0; i<n; i++) {
            int beam = 0;
            for(char c:bank[i]) {
                if(c=='1')
                beam++;
            }
            if(beam!=0) {
                res+=(temp*beam);
                temp = beam;
            }
        }
        return res;
    }
};
