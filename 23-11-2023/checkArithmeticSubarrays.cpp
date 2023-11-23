class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i=0; i<l.size(); i++) {
            vector<int> temp(nums.begin()+l[i], nums.begin()+r[i]+1);  
            sort(temp.begin(), temp.end());
            int diff, flag = 0;
            if(temp.size()>=2) {
                diff = temp[1]-temp[0];
                for(int j=2; j<temp.size(); j++) {
                    if((temp[j]-temp[j-1])!=diff){
                        flag = 1;
                        break;
                    }
                }
                if(flag==0)
                res.push_back(true);
                else
                res.push_back(false);
            }
            else
            res.push_back(false);
        }
        return res;
    }
};
