class Solution {
public:
    string generateBin(int len, string s, unordered_set<string> unique) {
        if(len==0) {
            if(unique.find(s)==unique.end())
            return s;
            return "";
        }
        string res = generateBin(len-1, s+'0', unique);
        if(res!="")
        return res;
        return generateBin(len-1, s+'1', unique);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int len = nums[0].length();
        unordered_set<string> unique(nums.begin(), nums.end());

        return generateBin(len, "", unique);
    }
};
