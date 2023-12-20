class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int req = prices[0]+prices[1];
        return (req<=money?(money-req):money);
    }
};
