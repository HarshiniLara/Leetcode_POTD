class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int res = 0;
        sort(piles.begin(), piles.end());
        int l = 0, r = piles.size()-1;
        while(l<r) {
            res+=piles[r-1];
            l++;
            r-=2;
        }
        return res;
    }
};
