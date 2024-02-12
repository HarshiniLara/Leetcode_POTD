class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, temp = nums[0];
        for(int i:nums) {
            if(i==temp) cnt++;
            else cnt--;
            if(cnt<0) {
                temp = i;
                cnt = 1;
            }
        }
        return temp;
    }
};
