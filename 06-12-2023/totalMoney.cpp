class Solution {
public:
    int totalMoney(int n) {
        int flag = 1, temp = 1, cnt = 0;
        for(int i=1; i<=n; i++) {
            cnt+=temp;
            temp++;
            if(i%7==0 || i==n) {
                flag++;
                temp = flag;
            }
        }
        return cnt;
    }
};
