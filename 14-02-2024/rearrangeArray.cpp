class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = 0, r = 0, n = nums.size();
        vector<int> res;
        bool flag = true;
        while(l<n || r<n) {
            if(flag==true) {
                while(l<n && nums[l]<0) l++;
                if(l<n) {
                    res.push_back(nums[l]);
                    flag = false;
                    l++;
                }
                else break;
            }
            else {
                while(r<n && nums[r]>0) r++;
                if(r<n) {
                    res.push_back(nums[r]);
                    flag = true;
                    r++;
                }
                else break;
            }
        } 
        return res;
    }
};
