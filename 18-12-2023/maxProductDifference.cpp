class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()-1]*nums[nums.size()-2]-nums[0]*nums[1];
        int max_no = INT_MIN, sec_max = max_no, min_no = INT_MAX, sec_min = min_no;
        for(int i:nums) {
            if(i>max_no) {
                sec_max = max_no;
                max_no = i;
            }
            else {
                if(i>sec_max)
                sec_max = i;
            }
            if(i<min_no) {
                sec_min = min_no;
                min_no = i;
            }
            else {
                if(i<sec_min)
                sec_min = i;
            }
        }
        return max_no*sec_max-min_no*sec_min;
    }
};
