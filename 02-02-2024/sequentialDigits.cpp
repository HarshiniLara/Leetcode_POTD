class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int i=1; i<10; i++) {
            int temp = i, j = i+1;
            while(temp<=high && j<10) {
                temp = temp*10+j;
                if(temp>=low && temp<=high) 
                    res.push_back(temp);
                j++;
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
