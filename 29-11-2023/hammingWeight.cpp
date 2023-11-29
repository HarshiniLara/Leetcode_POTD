class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for(int i=0; i<32; i++) {
            uint32_t temp = 1<<i;
            if(n & temp)
            res++;
        }
        return res;
    }
};
