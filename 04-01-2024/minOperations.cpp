//hint: ceil((double)(c) / 3)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i:nums)
        freq[i]++;
        int cnt = 0;

        for(auto it=freq.begin(); it!=freq.end(); ++it) {
            int temp = it->second;
            if(temp<2)
            return -1;
            int min_op = 0;
            if(temp%3==0)
            min_op = temp/3;
            else if(temp%3==2) {
                int val = temp/3+1;
                if(min_op>0)
                min_op = min(min_op, val);
                else
                min_op = val;
            }
            else if(temp%3==1) {
                int div = temp-3, val = div/3+(div%3+(temp-div))/2;
                if(min_op>0)
                min_op = min(min_op, val);
                else
                min_op = val;
            }
            else {
                int val = temp/2;
                if(min_op>0)
                min_op = min(min_op, val);
                else
                min_op = val;
            }
            cnt+=min_op;
        }
        return cnt;
    }
};
