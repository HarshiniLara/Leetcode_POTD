class Solution {
public:
    int numberOfWays(string corridor) {
        int s = 0, mod = 1e9+7;
        long long res = 1;
        for(char ch:corridor) {
            if(ch=='S')
            s++;
        }
        if(s%2==1 || s<1)
        return 0;
        int l = 0, r = corridor.length()-1;
        while(corridor[l]=='P')
        l++;
        while(corridor[r]=='P')
        r--;
        int i = l, temp = 0;
        while(i<=r) {
            int flag = 0;
            if(corridor[i]=='S')
            temp++;
            if(temp==2) {
                int cnt = 0;
                while((i+1)<=r && corridor[++i]=='P') {
                    cnt++;
                }
                res = (res*(cnt+1))%mod;
                temp = 0;
            }
            else
            i++;
        }
        return res;
    }
};
